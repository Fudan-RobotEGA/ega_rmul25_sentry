import rclpy
from rclpy.node import Node
import serial
import crcmod
import threading
import struct
from sentry_interface.msg import SentryStatus
from sentry_interface.msg import SentryVel 
import os
import time

class serial_set(Node):
    def __init__(self , name):
        super().__init__(name)
        self.get_logger().info("node %s start" % name)
        self.serial_port = '/dev/ttyACM0'
        while not os.path.exists(self.serial_port):
            self.get_logger().warn("未检测到串口存在，请插上串口或重新插拔")
            time.sleep(0.1)
        if os.path.exists(self.serial_port):
            time.sleep(1)
        self.status_pub = self.create_publisher(SentryStatus , 'status_data' , 10) 
        self.vel_sub = self.create_subscription(
            SentryVel,
            '/cmd_sentry_vel',
            self.vel_sub_callback,
            10
        )
        self.id = 20000
        self.serial_flag = 0
        self.init_serial()

    def vel_sub_callback(self , data):
        """接受/cmd_sentry_vel的回调并串口发送给下位机"""
        vel_x_byte = struct.pack('<f' , data.vel_x)
        vel_y_byte = struct.pack('<f' , data.vel_y)
        vel_z_byte = struct.pack('<f' , data.vel_z)
        angle_yaw_byte = struct.pack('<f' , data.angle_yaw)
        self.id_byte = struct.pack('<L' , self.id)
        #添加crc16并发送
        data_bytes = self.frame_header + vel_y_byte + vel_x_byte + vel_z_byte + angle_yaw_byte + self.id_byte     
        crc_data = self.crc_16(data_bytes)
        self.sendbytes_once = data_bytes + crc_data.to_bytes(2 , 'little')
        self.yaw_ser.write(self.sendbytes_once)
        self.id += 1

    def init_serial(self):
        ''' 初始化串口配置，注意这里的部分后面都可以用yaml形式配置'''
        bps = 115200
        self.frame_len = 11 #一帧的长度，包括帧头、有效位和crc位
        try:
            while not os.path.exists(self.serial_port):
                time.sleep(0.1)
                print("fail to find port when restart")
            self.yaw_ser = serial.Serial(self.serial_port , int(bps))
        except Exception as e:
            self.get_logger().info(f"串口开启失败：{str(e)}")
            # raise
            time.sleep(0.1)
            # self.init_serial()
        self.frame_header = b'\xA5' #帧头，注意与下位机匹配，需与电控组沟通
        # self.frame_tail = b'\x0D\x0A'
        if self.yaw_ser.is_open:
            self.get_logger().info("serial is ok!")
        else:
            self.get_logger().info("serial init fail!")
        #创建crc校验格式
        self.crc_16 = crcmod.mkCrcFun(poly=0x11021 , rev=True , initCrc=0xFFFF , xorOut=0x0000) 
        self.crc_len = 2
        #创建新线程用于接受串口数据
        if not self.serial_flag:
            self.recieve_thread = threading.Thread(target=self.data_get)
            self.recieve_thread.start()
    
    def verify_crc(self,data_frame):
        """crc校验函数"""
        #分离有效数据位和校验位
        payload =  data_frame[:-2]
        recieved_crc = data_frame[-2:]
        #计算crc和校验
        calculated_crc = self.crc_16(payload).to_bytes(2 , 'little')
        # print(calculated_crc)
        return recieved_crc == calculated_crc

    def parse_frame(self,raw_data):
        """对原始数据进行帧划分"""
        #寻找帧头以判断一段完整的帧
        start = raw_data.find(self.frame_header)
        if start == -1: #若找不到帧头（输出-1）则：
            return None , raw_data
        # end = raw_data.find(self.frame_tail , start + len(self.frame_header))
        # if end == -1:
        #     return None , raw_data[start:]
        #分割帧
        one_frame = raw_data[start:start + self.frame_len] #one_frame包括完整的一帧，帧头+有效位+crc校验
        remaining = raw_data[start + self.frame_len:]
        return one_frame , remaining

    def pub_data(self,payload):
        """对有效帧数据进行处理，并发布到/status_data话题"""
        msg = SentryStatus()
        msg.game_stage = int.from_bytes(payload[:1] , byteorder="little" , signed=False)
        msg.gain_area_detected = int.from_bytes(payload[1:2] , byteorder="little" , signed=False)
        msg.gain_area_status = int.from_bytes(payload[2:3] , byteorder="little" , signed=False)
        msg.supply_area_status = int.from_bytes(payload[3:4] , byteorder="little" , signed=False)
        msg.stage_time_remain = int.from_bytes(payload[4:6] , byteorder="little" , signed=False)
        msg.current_hp = int.from_bytes(payload[6:8] , byteorder="little" , signed=False)
        self.status_pub.publish(msg)
        self.get_logger().info(f"数据已发布")
    
    def data_get(self):
        '''接收端主程序'''
        raw_buffer = bytes()
        while rclpy.ok():
            if self.yaw_ser.is_open:
                self.serial_flag = 1
                try:
                    raw_buffer += self.yaw_ser.read_all()
                    #对缓存区数据进行帧处理和发布
                    while 1:
                        one_frame , remaining = self.parse_frame(raw_buffer)
                        print(one_frame)
                        if not one_frame:
                            break #若当前缓存区的所有有效帧均已提取，则break
                        #添加crc校验
                        if self.verify_crc(one_frame):
                            payload = one_frame[len(self.frame_header):]
                            self.pub_data(payload) 
                        else:
                            self.get_logger().warn("CRC校验错误")
                        raw_buffer = remaining
                # except serial.SerialException as e:
                except:
                    self.get_logger().error(f"串口错误")
                    self.yaw_ser.close()
                    self.init_serial()
                    
            else:
                self.get_logger().warn("串口连接断开，尝试重连中...")
                self.yaw_ser.close()
                self.init_serial()
                threading.Event().wait(1)

def main(args = None):
    rclpy.init(args=args)
    yaw_serial_set = serial_set("yaw_data_get")
    try:
        rclpy.spin(yaw_serial_set)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()

    
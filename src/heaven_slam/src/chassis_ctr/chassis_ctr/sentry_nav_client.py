"""哨兵控制动作结点客户端"""
#功能：对哨兵行为进行决策规划，并将规划相应结果发送给服务器
import rclpy
from geometry_msgs.msg import PoseStamped , TransformStamped
# from rclpy.action import ActionClient
from rclpy.node import Node
import math
import numpy as np
import yaml
import ament_index_python
import rclpy.time
from sentry_interface.action import ActionControl
from sentry_interface.msg import SentryStatus
from sentry_interface.msg import SentryVel
import os
import threading
from nav2_simple_commander.robot_navigator import BasicNavigator , TaskResult
import time
from tf2_ros.transform_listener import TransformListener
from tf2_ros.buffer import Buffer 
from rclpy.executors import MultiThreadedExecutor
from nav2_msgs.msg import Costmap
from threading import Lock
import subprocess
from geometry_msgs.msg import PoseWithCovarianceStamped

class status_ctr():
    """哨兵决策类"""
    def __init__(self) -> None:
        """此处大多为可配置参数，后面可写在yaml文件里以便于更改"""
        #速度控制参数
        self.speed_default = None
        self.target_angle_yaw = None
        self.moving_flag = None
        self.area_gain_epsilon = None
        self.area_supply_epsilon = None 
        self.speed_default = None
        self.vel_z_retreat = None   
        self.vel_z_defend = None  
        #地图参数
        self.gain_pos_map = None
        self.supply_pos_map = None
        self.positive_mode = None
        self.monitor_pos_map = None
        self.hold_on_time = None
        self.full_hp = 400
        #三个flag和一个标志用于定义当前位置
        self.arrive_supply_flag = 1
        self.arrive_gain_flag = 2
        self.area_monitor_flag = 3
        self.area_other_flag = 4
        self.area_gain_flag = 5
        self.area_supply_flag = 6
        self.where_is_me = self.arrive_supply_flag
        #四个flag和一个标志用于定义当前血量状态
        self.hp_full_flag = 1
        self.hp_fine_flag = 2
        self.hp_danger_flag = 3
        self.hp_dead_flag = 4
        self.how_is_me = self.hp_full_flag 
        self.retreat_hp = None
        #下一步行动标志
        # self.action_status = SentryStatus.STATUS_ATTACKING
        self.action_status = None
        #串口名
        self.serial_name = '/dev/ttyACM0'
        #定义初始状态
        # self.last_status = SentryStatus.STATUS_ATTACKING
        #测试参数用，上机时注释掉
        # self.current_hp = 400
        # self.game_stage = 4
        # self.stage_time_remain = 1

    def get_current_pos(self , data):
        """获取当前/map下位置"""
        self.current_pos_map = [data.x , data.y]
 
    def get_status(self , status_data):
        self.current_hp = status_data.current_hp
        self.gain_area_detected = status_data.gain_area_detected
        self.gain_area_status = status_data.gain_area_status
        self.supply_area_status = status_data.supply_area_status
        self.stage_time_remain = status_data.stage_time_remain
        self.game_stage = status_data.game_stage   

    # def get_feedback(self , data):
    #     # self.current_pos_map = [data.current_pose[0] + self.supply_pos_map[0] , data.current_pose[1] + self.supply_pos_map[1]]
    #     self.current_status = data.current_status

    def check_area(self):
        if self.positive_mode: #若为前压模式
            if abs(self.current_pos_map[0] - self.gain_pos_map[0]) < self.area_gain_epsilon and abs(self.current_pos_map[1] - self.gain_pos_map[1]) < self.area_gain_epsilon:
                self.where_is_me = self.area_gain_flag
            elif abs(self.current_pos_map[0] - self.supply_pos_map[0]) < self.area_supply_epsilon and abs(self.current_pos_map[1] - self.supply_pos_map[1]) < 2 * self.area_supply_epsilon:
                self.where_is_me = self.area_supply_flag
            else:
                self.where_is_me = self.area_other_flag
        else: #若为监视模式
            if abs(self.current_pos_map[0] - self.monitor_pos_map[0]) < self.area_gain_epsilon and abs(self.current_pos_map[1] - self.monitor_pos_map[1]) < self.area_gain_epsilon:
                self.where_is_me = self.area_monitor_flag
            elif abs(self.current_pos_map[0] - self.supply_pos_map[0]) < self.area_supply_epsilon and abs(self.current_pos_map[1] - self.supply_pos_map[1]) < 2 * self.area_supply_epsilon:
                self.where_is_me = self.area_supply_flag
            else:
                self.where_is_me = self.area_other_flag

    def check_health(self):
        if self.current_hp == self.full_hp:
            self.how_is_me = self.hp_full_flag
        elif self.current_hp == 0:
            self.how_is_me = self.hp_dead_flag
        elif self.current_hp < self.retreat_hp:
            self.how_is_me = self.hp_danger_flag
        else:
            self.how_is_me = self.hp_fine_flag

    def check_serial(self):
        """根据能否检测到串口判断当前是否存活"""
        return os.path.exists(self.serial_name)
        
    def monitor_and_decision(self):
        self.check_health()
        self.check_area()
        # print("yes")
        print(self.stage_time_remain)
        if self.stage_time_remain > self.hold_on_time:
            print("时间大于280s")
            if not self.how_is_me == self.hp_dead_flag:
                print("未死亡")
                if self.how_is_me == self.hp_danger_flag:
                    print("血量危险！")
                    if self.where_is_me == self.area_supply_flag: #若在增益区
                        print("处于补给模式")
                        self.action_status = SentryStatus.STATUS_HEALING
                    elif self.where_is_me == self.area_gain_flag or self.where_is_me == self.area_other_flag:
                        print("处于撤退模式")
                        self.action_status = SentryStatus.STATUS_RETREATING
                    else:
                        print("未知状态1")
                elif self.how_is_me == self.hp_fine_flag:
                    print("血量健康！")
                    if self.where_is_me == self.arrive_supply_flag:
                        print("处于补给模式")
                        self.action_status = SentryStatus.STATUS_HEALING
                    elif self.where_is_me == self.area_other_flag:
                        print("处于进攻模式")
                        self.action_status = SentryStatus.STATUS_ATTACKING
                    else:
                        print("处于防御模式")
                        self.action_status = SentryStatus.STATUS_DEFENDING
                else:
                    print("满血状态")
                    if self.where_is_me == self.area_gain_flag or self.where_is_me == self.area_monitor_flag:
                        print("位于增益区且满血，开始防御模式")
                        self.action_status = SentryStatus.STATUS_DEFENDING
                    else:
                        print("满血，开始进攻")
                        self.action_status = SentryStatus.STATUS_ATTACKING
            else:
                print("已死亡，即将开始撤退")
                self.action_status = SentryStatus.STATUS_RETREATING
        elif self.stage_time_remain < self.hold_on_time and self.where_is_me == self.area_gain_flag:
            print("比赛即将结束，死战不退!")
            self.action_status = SentryStatus.STATUS_DEFENDING
        else:
            print("未知状态")

    def check_health(self):
        if self.current_hp == self.full_hp:
            self.how_is_me = self.hp_full_flag
        elif self.current_hp == 0:
            self.how_is_me = self.hp_dead_flag
        elif self.current_hp < self.retreat_hp:
            self.how_is_me = self.hp_danger_flag
        else:
            self.how_is_me = self.hp_fine_flag

    def check_serial(self):
        """检测串口状态"""
        return os.path.exists(self.serial_name)

class sentry_client(Node):
    def __init__(self , name):
        super().__init__(name)
        self.get_logger().info(f"哨兵行为控制客户端结点启动！")
        self.heaven = status_ctr()
        self.rotate_flag = SentryStatus()
        self.node_config_loader()
        self.declare_parameters(
            namespace='',
            parameters=[
                ('timeout_threshold', 5.0),  # 默认超时5秒
                ('restart_script', '/path/to/restart_nav.sh'),
                ('costmap_topic', '/global_costmap/costmap_raw'),
                ('recovery_grace_period', 3.0)
            ]
        )
        #创建状态订阅器
        self.status_subscribe = self.create_subscription(
            SentryStatus, 
            "/status_data", 
            self.status_callback, 
            10
        )
        #创建速度发布器
        self.SentryVel_pub = self.create_publisher(
            SentryVel, 
            '/cmd_sentry_vel', 
            10
        )
        #创建是否开始小陀螺节点
        self.rotate_flag_pub = self.create_publisher(
            SentryStatus,
            '/rotate_command',
            10
        )

        #功能检测监视
        # self.costmap_alive = self.create_subscription(
        #     Costmap,
        #     self.get_parameter('costmap_topic').value,
        #     self.costmap_callback,
        #     10
        # )
        
         # 创建健康检查定时器
        # self.create_timer(1.0, self.costmap_check)
        # self.get_logger().info("Costmap 监控节点已启动")
        # self.last_costmap_time = time.time()
        # self.script_executing = False
        # self.lock = Lock()
        
        self.recieve_status_topic = 0
        self.recieve_tf_flag = 0

        #tf listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer , self)
        self.timer = self.create_timer(0.1 , self.timer_callback)

        self.navigator = BasicNavigator()
        # self.navigator.waitUntilNav2Active(localizer="slam_toolbox")
        
        self.gain_pos = PoseStamped()
        self.gain_pos.header.frame_id = 'map'
        self.gain_pos.pose.position.x = float(self.gain_target_map[0])
        self.gain_pos.pose.position.y = float(self.gain_target_map[1])
        
        self.monitor_pos = PoseStamped()
        self.monitor_pos = 'map'
        self.monitor_pos = float(self.heaven.monitor_pos_map[0])
        self.monitor_pos = float(self.heaven.monitor_pos_map[1])

        self.supply_pos = PoseStamped()
        self.supply_pos.header.frame_id = 'map'
        self.supply_pos.pose.position.x = float(self.supply_target_map[0])
        self.supply_pos.pose.position.y = float(self.supply_target_map[1])

        self.vel_defend = SentryVel()
        self.vel_defend.vel_x = float(0)
        self.vel_defend.vel_y = float(0)
        self.vel_defend.vel_z = float(self.heaven.vel_z_defend)
        self.vel_defend.angle_yaw = float(0)                           

        self.vel_heal = SentryVel()
        self.vel_heal.vel_x = float(0)
        self.vel_heal.vel_y = float(0)
        self.vel_heal.vel_z = float(3)
        self.vel_heal.angle_yaw = float(0)
        
        self.init_vel = status_ctr()
        self.init_vel.vel_x = 0
        self.init_vel.vel_y = 0
        self.init_vel.vel_z = 1
        self.init_vel.angle_yaw = 0

        self.publisher = self.create_publisher(PoseWithCovarianceStamped, '/initialpose', 10)

        self.declare_parameters(
            namespace='',
            parameters=[
                ('initial_x', -4.937137603759766),
                ('initial_y', 2.2677254676818848),
                # ('initial_yaw', None),  # ¿ÉÑ¡²ÎÊý£¨ÓëËÄÔªÊý¶þÑ¡Ò»£©
                ('orientation_x', 0.0),
                ('orientation_y', 0.0),
                ('orientation_z', 0.0),
                ('orientation_w', 1.0)
             ]
        )
        x = self.get_parameter('initial_x').value
        y = self.get_parameter('initial_y').value

        qx = self.get_parameter('orientation_x').value
        qy = self.get_parameter('orientation_y').value
        qz = self.get_parameter('orientation_z').value
        qw = self.get_parameter('orientation_w').value
        self.publish_initial_pose(x, y, qx, qy, qz, qw)

        self.control_freq = 10
        self.control_thread = threading.Thread(target=self.main_mission)
        self.control_thread.start()
    
    def main_mission(self):
        """主任务控制函数"""
        #检测是否正常接收到位置数据
        while not self.recieve_tf_flag:
            # self.get_logger().warn("未接收到位置数据，等待中")
            time.sleep(0.1)
        self.get_logger().debug("成功接收到位置数据！")
        #检测是否正常接收到状态数据
        while not self.recieve_status_topic:
            self.get_logger().warn("未成功接收到状态数据！")
            time.sleep(0.1)
        self.get_logger().debug("成功接收到状态数据")
        #检测比赛是否开始
        while not self.heaven.game_stage == 4:
           self.get_logger().info("比赛尚未开始，系统休眠中")
           time.sleep(0.1)
           self.vel_pub(self.init_vel)
        #    self.rotate_flag.rotate_flag = self.heaven.vel_z_retreat
        #    self.rotate_flag_pub.publish(self.rotate_flag)
        self.get_logger().debug("比赛开始，祝好运！")        
        
        #状态决策循环
        rate = self.create_rate(self.control_freq)
        while rclpy.ok():
            self.heaven.monitor_and_decision()
            #根据当前状态选择相应行为
            #进攻模式
            if self.heaven.action_status == SentryStatus.STATUS_ATTACKING:
                self.gain_pos.header.stamp = self.navigator.get_clock().now().to_msg()
                self.heaven.moving_flag = 1
                self.rotate_flag.rotate_flag = self.heaven.vel_z_retreat
                self.rotate_flag_pub.publish(self.rotate_flag)
                if self.navigator.isTaskComplete():
                    if self.heaven.positive_mode == True:
                        self.navigator.goToPose(self.gain_pos)
                    else:
                        self.navigator.goToPose(self.monitor_pos)
            #撤退模式
            elif self.heaven.action_status == SentryStatus.STATUS_RETREATING:
                self.supply_pos.header.stamp = self.navigator.get_clock().now().to_msg()
                self.heaven.moving_flag = 1
                self.rotate_flag.rotate_flag = self.heaven.vel_z_retreat
                self.rotate_flag_pub.publish(self.rotate_flag)
                if self.navigator.isTaskComplete():
                    self.navigator.goToPose(self.supply_pos)
            #防御模式                
            elif self.heaven.action_status == SentryStatus.STATUS_DEFENDING:
                self.rotate_flag.rotate_flag = 0
                self.rotate_flag_pub.publish(self.rotate_flag)
                self.vel_pub(self.vel_defend)
                self.heaven.moving_flag = 0
            #补给模式
            elif self.heaven.action_status == SentryStatus.STATUS_HEALING:
                self.rotate_flag.rotate_flag = 0
                self.rotate_flag_pub.publish(self.rotate_flag)
                self.vel_pub(self.vel_heal)
                self.heaven.moving_flag = 0
            current_status = self.heaven.action_status #保存当前状态
            print("行动标志：",self.heaven.moving_flag)
            print("动作标志：",self.heaven.action_status)
            print("当前位置：",self.heaven.current_pos_map)
            print("当前血量：",self.heaven.current_hp)
            print("血量状态：",self.heaven.how_is_me)
            print("位置区域",self.heaven.where_is_me)
            #管理进入nav2接管后的行为：
            if self.heaven.moving_flag:
                while not self.navigator.isTaskComplete():
                    self.rotate_flag.rotate_flag = self.heaven.vel_z_retreat
                    self.rotate_flag_pub.publish(self.rotate_flag)
                    # feedback = self.navigator.getFeedback()       
                    self.heaven.monitor_and_decision()
                    print(self.heaven.current_pos_map)
                    if self.heaven.action_status == SentryStatus.STATUS_RETREATING and current_status == SentryStatus.STATUS_ATTACKING:
                        self.navigator.cancelTask()
                result = self.navigator.getResult()
                if result == TaskResult.SUCCEEDED:
                    if current_status == SentryStatus.STATUS_ATTACKING:
        
                        self.get_logger().info("到达增益点")
                    elif current_status == SentryStatus.STATUS_RETREATING:
                        self.get_logger().info("到达补给点")
                else:
                    self.get_logger().warn("navigate fail")
            rate.sleep()

    def node_config_loader(self):
        """读取yaml文件"""
        pkg_path = os.path.join(
            ament_index_python.get_package_share_directory('chassis_ctr'),
            'config',
            'action_ctr_params.yaml'
        )
        try:
            with open(pkg_path , 'r') as f:
                config = yaml.safe_load(f) #从yaml文件中读取参数
                game_mode = config['game_mode']
                if game_mode: 
                    map_para = config['game_map']
                else:
                    map_para = config['test_map']
                #地图坐标相关参数加载
                self.rot_angle = config['rot_angle']
                self.supply_target_map = self.rot_point(map_para['supply_target_map'] , self.rot_angle)
                self.gain_target_map = self.rot_point(map_para['gain_target_map'] , self.rot_angle)
                self.heaven.begin_pos_map= self.rot_point(map_para['begin_pos_map'] , self.rot_angle) #设置起点位置
                self.heaven.supply_pos_map = self.rot_point(map_para['supply_pos_map'] , self.rot_angle)
                self.heaven.monitor_pos_map = self.rot_point(map_para['monitor_pos_map'] , self.rot_angle)
                self.heaven.gain_pos_map = self.rot_point(map_para['gain_pos_map'] , self.rot_angle)
                #运动控制相关参数加载
                self.heaven.area_gain_epsilon = config['area_gain_epsilon'] 
                self.heaven.area_supply_epsilon = config['area_supply_epsilon'] 
                self.heaven.speed_default = config['speed_default'] #默认速度
                self.heaven.vel_z_retreat = config['vel_z_retreat'] #撤退时的小陀螺速度
                self.heaven.vel_z_defend = config['vel_z_defend'] #防御时的小陀螺速度
                #策略相关参数加载
                self.heaven.retreat_hp = config['retreat_hp'] #触发撤退的hp
                self.heaven.positive_mode = config['positive_mode']
                self.heaven.hold_on_time = config['hold_on_time']
        except Exception as e:
            print(f"YAML加载失败：{str(e)}")
            raise
        
    def costmap_callback(self , msg):
        """costmap消息回调定时器"""
        self.last_costmap_time = time.time()
        self.get_logger().debug("接收到 costmap 更新", throttle_duration_sec=5.0)

    def serial_check(self):
        """定时健康检查"""
        if self.script_executing:
            return
        current_time = time.time()
        time_diff = current_time - self.last_status_time
        # 获取动态参数
        timeout_threshold = self.get_parameter('timeout_threshold').value

        if time_diff > timeout_threshold:
            self.get_logger().error(
                f"Costmap 超时！最后更新时间: {self.last_status_time:.1f}，"
                f"当前时间: {current_time:.1f}，时间差: {time_diff:.1f}s"
            )
            self.trigger_restart()
    
    def trigger_restart(self):
        """执行节点重启协议"""
        with self.lock:
            if self.script_executing:
                return
            self.script_executing = True
            script_path = self.get_parameter('restart_script').value
            try:
                # 执行重启脚本
                result = subprocess.run(
                    "/home/robotega/init_serial.sh",
                    check=True,
                    timeout=3.0,
                    capture_output=True,
                    text=True
                )
                self.get_logger().info(
                    f"导航节点重启成功！输出：{result.stdout}"
                )
                # 重置计时器并添加宽限期
                self.last_status_time = time.time() + \
                    self.get_parameter('recovery_grace_period').value
            except subprocess.CalledProcessError as e:
                self.get_logger().error(
                    f"脚本执行失败：{e}\n错误输出：{e.stderr}"
                )
            except subprocess.TimeoutExpired:
                self.get_logger().error("重启脚本执行超时")
            except Exception as e:
                self.get_logger().error(f"未知错误：{str(e)}")
            finally:
                self.script_executing = False

    def publish_initial_pose(self, x, y, qx, qy, qz, qw):
        msg = PoseWithCovarianceStamped()
        # msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'map'  # 定义需要设置初始位置的frame_id

        # 初始位置设置
        msg.pose.pose.position.x = x
        msg.pose.pose.position.y = y
        msg.pose.pose.position.z = 0.0

        # 初始朝向设置
        msg.pose.pose.orientation.x = qx
        msg.pose.pose.orientation.y = qy
        msg.pose.pose.orientation.z = qz
        msg.pose.pose.orientation.w = qw

        # 协方差矩阵
        covariance = [0.0] * 36
        covariance[0] = 0.25   
        covariance[7] = 0.25   
        covariance[35] = (math.pi / 12) ** 2  
        msg.pose.covariance = covariance

        self.publisher.publish(msg)
                     
    def rot_array(self , pos , angle):
        new_pos = []
        angle_rad = math.radians(angle)
        cos_angle = math.cos(angle_rad)
        sin_angle = math.sin(angle_rad)
        for i in range(len(pos)):
            new_x = pos[i][0] * cos_angle + pos[i][1] * sin_angle
            new_y = - pos[i][0] * sin_angle + pos[i][1] * cos_angle
            new_pos.append([new_x , new_y])
        return new_pos
    
    def rot_point(self , pos , angle):
        angle_rad = math.radians(angle)
        cos_angle = math.cos(angle_rad)
        sin_angle = math.sin(angle_rad)
        new_x = pos[0] * cos_angle + pos[1] * sin_angle
        new_y = - pos[0] * sin_angle + pos[1] * cos_angle
        new_pos = [new_x , new_y]
        return new_pos
    
    def timer_callback(self):
        try:
            now = rclpy.time.Time()
            trans = self.tf_buffer.lookup_transform('map' , 'base_link' , now)
            trans_pos = trans.transform.translation
            self.heaven.get_current_pos(trans_pos)
            self.recieve_tf_flag = 1
        except:
            self.get_logger().warn("waiting to get tf")

    def vel_pub(self , vel_data):
        cmd = SentryVel()
        vel_x = float(vel_data.vel_x)
        vel_y = float(vel_data.vel_y)
        vel_z = float(vel_data.vel_z)
        angle_yaw = float(vel_data.angle_yaw)
        cmd.vel_x = vel_x
        cmd.vel_y = vel_y
        cmd.vel_z = vel_z
        cmd.angle_yaw = angle_yaw
        self.SentryVel_pub.publish(cmd)
        
    def status_callback(self , data):
        self.last_status_time = time.time()
        self.recieve_status_topic = 1
        self.heaven.get_status(data)
        
    
def main(args=None):
    rclpy.init(args=args)
    node = sentry_client("heaven_nav_client")
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
    

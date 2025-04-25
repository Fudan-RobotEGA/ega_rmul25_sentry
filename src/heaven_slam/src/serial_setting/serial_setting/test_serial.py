import numpy as np
import math
import serial
from serial.tools import list_ports
import struct
import crcmod

crc_mode = 0x11021

#sample
vel_x = 0.0114555
vel_y = -1.8882333
vel_z = 1
angel_yaw = 45

#init serial port
bps = 115200
ser = serial.Serial('/dev/ttyACM0' , int(bps))
if ser.is_open:
    print("open serial port success!")
else:
    print("fail to open serial port")

#transfer data type tp byte
vel_x_byte = struct.pack('<f' , vel_x)
vel_y_byte = struct.pack('<f' , vel_y)
vel_z_byte = struct.pack('<f' , vel_z)
angel_yaw_byte = struct.pack('<f' , angel_yaw)
print(len(vel_x_byte) , vel_y_byte)

#add crc16
# sign_VEL = 1
# sign_VEL_byte = sign_VEL.to_bytes(1 , 'big')
# data_bytes_x = sign_VEL_X.to_bytes(1 , 'big') + vel_x_byte
# data_bytes_y = sign_VEL_Y.to_bytes(1 , 'big') + vel_y_byte
# data_bytes = sign_VEL_byte + vel_x_byte + vel_y_byte
data_bytes = vel_x_byte + vel_y_byte +vel_z_byte + angel_yaw_byte
# print(data_bytes_x , data_bytes_y)
crc_16 = crcmod.mkCrcFun(poly=0x11021 , rev=True , initCrc=0xFFFF , xorOut=0x0000)
# crc_data_x = crc_16(data_bytes_x)
# crc_data_y = crc_16(data_bytes_y)
crc_data = crc_16(data_bytes)
print(crc_data)
# print(crc_data_x , crc_data_y)
# sendbytes_x = data_bytes_x + crc_data_x.to_bytes(2 , 'big')
# sendbytes_y = data_bytes_y + crc_data_y.to_bytes(2 , 'big')
sendbytes_once = data_bytes + crc_data.to_bytes(2 , 'little')
# print(sendbytes_x , sendbytes_y , crc_data_x.to_bytes(2 , 'big') ,crc_data_y.to_bytes(2 , 'big'))
# a = b'\xa4W'
# b = b'\xab\x9b'
# print(struct.unpack(">H",a) , struct.unpack(">H",b) )
# sendbytes_once = sendbytes_x + sendbytes_y
print(len(sendbytes_once) , len(vel_x_byte) , len(vel_y_byte) , len(crc_data.to_bytes(2 , 'little')))
# sendbytes_once_hex = bytes.fromhex(sendbytes_once)
print(sendbytes_once)
ser.write(sendbytes_once)
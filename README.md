# EGA_RM_sentry_25
复旦大学 星云ega战队 2025赛季哨兵决策/导航实车包
## 项目介绍
此项目为本战队25赛季上海站联盟赛中哨兵实际部署的上位机决策与导航功能，机械构型使用深大开源双头哨兵的全向轮小车，传感器方面仅使用一台MID360，计算平台使用orin nx 16g版本。在实际比赛中，功能表现稳定，有较多高光表现时刻。
## 安装使用教程
### 1.克隆源码
### 2.编译
### 3.运行
#### （1）建图
`. start_mapping.sh`
在rviz中保存地图放至src/pb_rmsimulation/src/rm_nav_bringup/map并编译
#### （2）启动ul地图导航
`. rmul.sh`
## 决策包介绍
决策包涉及到较多逻辑判断，为方便开发调试，主要采用python编写。  
heaven_slam包括三个功能包：chassis_ctr、senry_interface和serial_setting  
chassis_ctr：哨兵行为控制包，采用有限状态机的编写思路对哨兵的行为进行管理，并包含节点异常处理和nav2初始化设置等；  
senry_interface：自定义接口包  
serial_setting：串口通讯维护包，管理与C板通讯的维护  
## 导航包改动介绍
## 后记
本项目由战队视觉组导航部开发。  
其中导航层主要参考北极熊战队的导航包（陈佬nb）

#!/bin/sh
gnome-terminal --tab -t "source" -- bash -c "source laser_filters-ros2/install/setup.sh"
gnome-terminal --tab -t "source" -- bash -c "source heaven_slam/install/setup.sh "
gnome-terminal --tab -t "start serial_setting" -- bash -c "ros2 run serial_setting yaw_data_get"
 
sleep 3s
gnome-terminal --tab -t "launch mapping" -- bash -c "ros2 launch rm_nav_bringup bringup_real.launch.py \
world:=2025 \
mode:=nav \
lio:=fastlio \
localization:=slam_toolbox \
lio_rviz:=False \
nav_rviz:=True 
"
sleep 3s
gnome-terminal --tab -t "start status_ctr" -- bash -c "ros2 run chassis_ctr heaven_nav_client"
sleep 1s
gnome-terminal --tab -t "start vel_trans " -- bash -c "ros2 run chassis_ctr cmd_vel_converter "
sleep 1s

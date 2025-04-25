#!/bin/sh
gnome-terminal --tab -t "source" -- bash -c "source laser_filters-ros2/install/setup.sh"
sleep 1s


gnome-terminal --tab -t "launch mapping" -- bash -c "ros2 launch rm_nav_bringup bringup_real.launch.py world:=test292 mode:=mapping  lio:=fastlio lio_rviz:=False nav_rviz:=True
"



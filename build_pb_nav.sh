#!/bin/sh
gnome-terminal --tab -t "source" -- bash -c "source laser_filters-ros2/install/setup.sh"
sleep 1s


gnome-terminal --tab -t "launch mapping" -- bash -c "colcon build --packages-select rm_nav_bringup --symlink-install
"




<p align="center">
  <img width="400" height="153 " src="https://user-images.githubusercontent.com/40801473/44174711-da90ba00-a0db-11e8-9ab2-1b4f3599eca2.png">
</p>

# HuskyRobotController1
Husky Robot sensing enviroment using Laser Scan. ROS simulation. Project 2: ETHZurich ROS Introduction.

Homework assignment followed here:\
	https://www.ethz.ch/content/dam/ethz/special-interest/mavt/robotics-n-intelligent-systems/rsl-dam/ROS2017/exercise2.pdf\

please follow this commands:\
	roslaunch husky_robot_controller husky_robot_sim_control.launch\
And:\
	Set LaserScan and RobotModel in rviz\
	Make laserscan points visible(make them a bit bigger)\
To see some changes and if it works:\
	(first install teleop_twist_keyboard)\
	rosrun teleop_twist_keyboard teleop_twist_keyboard.py

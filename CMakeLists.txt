cmake_minimum_required(VERSION 2.8.3)
project(husky_robot_controller)


find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  sensor_msgs
)

## Generate messages in the 'msg' folder
# add_message_files(
#   FILES
#   Message1.msg
#   Message2.msg
# )

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

## Generate added messages and services with any dependencies listed here
# generate_messages(
#   DEPENDENCIES
#   sensor_msgs
# )

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES husky_robot_controller
#  CATKIN_DEPENDS roscpp rospy sensor_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(husky_robot_controller_node src/husky_robot_controller_node.cpp)

add_dependencies( husky_robot_controller_node
	husky_robot_controller_node_generate_messages_cpp)


target_link_libraries(husky_robot_controller_node
	${cartkin_LIBRARIES}
)

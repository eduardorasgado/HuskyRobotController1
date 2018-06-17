#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

void scanCallback(const sensor_msgs::LaserScan::ConstPtr& scan){
	//scanned->ranges[]
	for(int i=0;i < scan->ranges.size();i++){
		float range = scan->ranges[i];
		ROS_INFO("RANGE[%d]=%f",i,range);
	}
}

int main(int argc, char **argv){
	//NODO SUBSCRIPTOR
	ros::init(argc, argv, "nodo_scan");
	ros::NodeHandle nodoScan;

	ROS_INFO("Se ha iniciado el nodo scan");

	ros::Subscriber subscriptor = nodoScan.subscribe("scan", 1, scanCallback);

	ros::spin();
	return 0;
}

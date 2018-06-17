#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"

void scanCallback(const sensor_msgs::LaseScan::ConstPtr& scanned){
	//scanned->ranges[]
	int n;
	int *p = scanned->ranges[];
	int lengthR = (sizeof(p)/sizeof(*p));
	for(n=0; n<lengthR; ++n){
		LOG_INFO("Range: %d", scanned->ranges[n]);
	}
	ROS_INFO("Got ranges!");
}

int main(int argc, char **argv){
	//NODO SUBSCRIPTOR
	ros::init(argc, argv, "nodo_scan");
	ros::NodeHandle nodoScan;

	ROS_INFO("Se ha iniciado el nodo scan");

	ros::Subscriber subscriptor = nodoScan.subscribe("scan",1, scanCallback);

	ros::spin()
	return 0;
}

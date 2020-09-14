#include "ros/ros.h"
#include "std_msgs/Float64.h"

#include <math.h>


int main(int argc, char **argv){
ros::init(argc, argv, "rotate");

ros::NodeHandle nh;

ros::Publisher pub3 = nh.advertise<std_msgs::Float64>("/joint4/command", 100);

ros::Rate loop-rate(10);

ros::Time startTime = ros::Time::now();

	while(ros::ok()){
		std_msgs::Float64 msg_to_send;

		msg_to_send.data = 0.0;
		
		pub3.publish(msg_to_send);

		ROS_INFO("isMoving gotopos to zero");

		ros::spinOnce();

		loop_rate.sleep();
	}
}

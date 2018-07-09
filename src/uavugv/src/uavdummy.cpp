#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/PoseWithCovarianceStamped.h"

ros::Publisher position;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "uav_pos_dummy");

  ros::NodeHandle n;
  geometry_msgs::PoseStamped UAV;

  UAV.pose.position.x = 1.1;
  UAV.pose.position.y = 2.2;
  UAV.pose.position.z = 3.3;

  position = n.advertise<geometry_msgs::PoseStamped>("/mavros/local_position/pose", 10);

  ros::Rate loop_rate(10);
  while (ros::ok())
  {
     position.publish(UAV);
     ros::spinOnce();
     loop_rate.sleep();
  }
  return 0;
}


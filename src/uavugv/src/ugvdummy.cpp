#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/PoseWithCovarianceStamped.h"

ros::Publisher position;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "ugv_pos_dummy");

  ros::NodeHandle n;
  geometry_msgs::PoseWithCovarianceStamped UGV;

  UGV.pose.pose.position.x = 4.4;
  UGV.pose.pose.position.y = 5.5;
  UGV.pose.pose.position.z = 6.6;

  position = n.advertise<geometry_msgs::PoseWithCovarianceStamped>("/UGV/local_position/pose", 10);

  ros::Rate loop_rate(1);
  while (ros::ok())
  {
     position.publish(UGV);
     ros::spinOnce();
     loop_rate.sleep();
  }
  return 0;
}




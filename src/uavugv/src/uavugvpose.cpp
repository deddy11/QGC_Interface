#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/PoseWithCovarianceStamped.h"
#include <uavugv/uavugverror.h>
#include "nav_msgs/Odometry.h"


ros::Subscriber uav_position;
ros::Subscriber ugv_position;
ros::Subscriber ugv_gps_position;
ros::Publisher error;

int status_uav = 0;
int status_ugv = 0;

//int gpsugvused = 0;

float uav_x;
float uav_y;
float uav_z;
float init_uav_x;
float init_uav_y;
float init_uav_z;

float ugv_x;
float ugv_y;
float ugv_z;
float ugv_x_gps;
float ugv_y_gps;
float ugv_z_gps;
float init_ugv_x;
float init_ugv_y;
float init_ugv_z;

float error_x;
float error_y;
float error_z;
float error_x_gps;
float error_y_gps;
float error_z_gps; 

uavugv::uavugverror errorpose;

// Callback ngambil data posisi dari UAV
void uav_posCallback(const geometry_msgs::PoseStamped::ConstPtr& UAV){

    if (!status_uav){
        init_uav_x = UAV->pose.position.x;
        init_uav_y = UAV->pose.position.y;
        init_uav_z = UAV->pose.position.z;

        status_uav = 1;
    } else {
        uav_x = UAV->pose.position.x-init_uav_x;
        uav_y = UAV->pose.position.y-init_uav_y;
        uav_z = UAV->pose.position.z-init_uav_z;
        }

    //ROS_INFO("Pos UAV: [x: %f y :%f z: %f]", uav_x, uav_y, uav_z);
    error_x = uav_x - ugv_x;
    error_y = uav_y - ugv_y;
    error_z = uav_z - ugv_z;
    
    error_x_gps = uav_x - ugv_x_gps;
    error_y_gps = uav_y - ugv_y_gps;
    error_z_gps = uav_z - ugv_z_gps;
    ROS_INFO("Error UAV-UGV fusion: [x: %f y :%f z: %f]", error_x, error_y, error_z);
    ROS_INFO("Error UAV-UGV gps: [x: %f y :%f z: %f]", error_x_gps, error_y_gps, error_z_gps);

    errorpose.x = error_x;
    errorpose.y = error_y;
    errorpose.z = error_z;

    error.publish(errorpose);
    //ROS_INFO("Posisi UAV: [x: %f y :%f z: %f]", UAV->pose.position.x, UAV->pose.position.y, UAV->pose.position.z);

}

//Ngambil data posisi dari UGV
void ugv_posCallback(const geometry_msgs::PoseWithCovarianceStamped::ConstPtr& UGV){

  //  if (!gpsugvused)
  //  {
    if (!status_ugv){
        init_ugv_x = UGV->pose.pose.position.x;
        init_ugv_y = UGV->pose.pose.position.y;
        init_ugv_z = UGV->pose.pose.position.z;

        status_ugv = 1;
    } else {
        ugv_x = UGV->pose.pose.position.x-init_ugv_x;
        ugv_y = UGV->pose.pose.position.y-init_ugv_y;
        ugv_z = UGV->pose.pose.position.z-init_ugv_z;
        }
  //  }
    //ROS_INFO("Pos UGV: [x: %f y :%f z: %f]", ugv_x, ugv_y, ugv_z);
    //ROS_INFO("Posisi UGV: [x: %f y :%f z: %f]", UGV->pose.pose.position.x, UGV->pose.pose.position.y, UGV->pose.pose.position.z);


}

//Ngambil data posisi dari gps ugv
void ugv_gpsCallback(const nav_msgs::Odometry::ConstPtr& UGV_gps){

//if (gpsugvused){
    if (!status_ugv){
        init_ugv_x = UGV_gps->pose.pose.position.x;
        init_ugv_y = UGV_gps->pose.pose.position.y;
        init_ugv_z = UGV_gps->pose.pose.position.z;

        status_ugv = 1;
    } else {
        ugv_x_gps = UGV_gps->pose.pose.position.x-init_ugv_x;
        ugv_y_gps = UGV_gps->pose.pose.position.y-init_ugv_y;
        ugv_z_gps = UGV_gps->pose.pose.position.z-init_ugv_z;
        }
//    }
    //ROS_INFO("Pos UGV: [x: %f y :%f z: %f]", init_ugv_x, init_ugv_y, init_ugv_z);
    //ROS_INFO("Posisi UGV: [x: %f y :%f z: %f]", UGV->pose.pose.position.x, UGV->pose.pose.position.y, UGV->pose.pose.position.z);


}


int main(int argc, char **argv){

    ros::init(argc, argv, "uavugvposition");
    ros::NodeHandle n; 

    uav_position = n.subscribe("/mavros/local_position/pose", 1, uav_posCallback);
    ugv_position = n.subscribe("/UGV/local_position/pose", 1, ugv_posCallback);
    ugv_gps_position = n.subscribe("/gps/enu", 1, ugv_gpsCallback);
    error = n.advertise<uavugv::uavugverror>("/UAVUGV/errorpose", 10);

    // error_x = uav_x - ugv_x;
    // error_y = uav_x - ugv_y;
    // error_z = uav_x - ugv_z;
    // ROS_INFO("Error UAV-UGV: [x: %f y :%f z: %f]", error_x, error_y, error_z);

    ros::spin();

    return 0;
}
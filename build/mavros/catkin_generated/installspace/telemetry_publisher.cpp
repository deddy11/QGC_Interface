#include <ros/ros.h>
#include <mavconn/interface.h>
#include <mavros_msgs/Mavlink.h>
#include <mavros_msgs/mavlink_convert.h>

// General parameters
uint8_t system_id = 100;
uint8_t component_id = 1;
uint8_t type = 10;
uint8_t autopilot = 0;
uint8_t base_mode = 128;
uint32_t custom_mode = 0;
uint8_t system_status = 0;

// Parameters of the altitude message
float alt_monotonic = 10.0;
float alt_amsl = 100;
float alt_local = 10.0;
float alt_relative = 10.0;
float alt_terrain = 10;
float bottom_clearance = 0;

int main(int argc, char **argv){

    // Create heartbeat message
    mavlink_message_t msg_heartbeat;
    mavlink_msg_heartbeat_pack(system_id, component_id, &msg_heartbeat, type, autopilot, base_mode, custom_mode, system_status);

    mavros_msgs::Mavlink ml_heartbeat;
    mavros_msgs::mavlink::convert(msg_heartbeat, ml_heartbeat);

    // Create altitude message
    mavlink_message_t msg_altitude;
    mavros_msgs::Mavlink ml_altitude;

    ros::init(argc, argv, "telemetry_publisher");
    ros::NodeHandle n;

    ros::Publisher example_pub = n.advertise<mavros_msgs::Mavlink>("/mavlink/from", 1000);
    ros::Rate loop_rate(1); // 1 Hz

    while (ros::ok())
    {
        uint64_t time_stamp = ros::Time::now().nsec;

        // Finish altitude message
        mavlink_msg_altitude_pack(system_id, component_id, &msg_altitude, time_stamp, alt_monotonic, alt_amsl, alt_local, alt_relative, alt_terrain, bottom_clearance);
        mavros_msgs::mavlink::convert(msg_altitude, ml_altitude);

        // Publish messages
        example_pub.publish(ml_heartbeat);
        example_pub.publish(ml_altitude);

        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}

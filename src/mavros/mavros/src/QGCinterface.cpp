#include <ros/ros.h>
#include <mavconn/interface.h>
#include <mavlink/v2.0/common/mavlink.h>
#include <mavlink/v2.0/ardupilotmega/mavlink.h>
#include <mavros_msgs/Mavlink.h>
#include <mavros_msgs/mavlink_convert.h>
#include "sensor_msgs/NavSatFix.h"
#include "mavros_msgs/Contaminant.h"

// General parameters for UGV Seekur Jr.
uint8_t system_id = 2;
uint8_t component_id = 1;
uint8_t type = 1;
uint8_t autopilot = 0;
uint8_t base_mode = 128;
uint32_t custom_mode = 0;
uint8_t system_status = 0;

uint64_t time_stamp;

ros::Publisher mav_out;
ros::Subscriber contaminant;
ros::Subscriber position;

// Create heartbeat message
mavlink_message_t msg_heartbeat;
mavros_msgs::Mavlink ml_heartbeat;

// Create position message
mavlink_message_t msg_position;
mavros_msgs::Mavlink ml_position;

// Create contaminant message
mavlink_message_t msg_contaminant;
mavros_msgs::Mavlink ml_contaminant;


void contaminantCallback(const mavros_msgs::Contaminant::ConstPtr& data)
{
    time_stamp = ros::Time::now().nsec;
    
    /**
    * Note for UAV-UGV Team:
    * We use "pressure3" message(declared in mavlink common message) for contaminant data communication between ROS and QGroundControl
    * Whoever wants to modify this code, ensure the use of pressure3 message does not interfere other systems
    * Pixhawk2 may use pressure3 message to stream its third barometer measurement. Therefore, this system must be revised in a way to avoid potention problems
    */
    
    /**
    * Information for pressure3 message
    * @brief Pack a scaled_pressure3 message
    * @param system_id ID of this system
    * @param component_id ID of this component (e.g. 200 for IMU)
    * @param msg The MAVLink message to compress the data into
    *
    * @param time_boot_ms Timestamp (milliseconds since system boot) 
    * @param press_abs Absolute pressure (hectopascal) 
    * @param press_diff Differential pressure 1 (hectopascal) 
    * @param temperature Temperature measurement (0.01 degrees celsius) 
    * @return length of the message in bytes (excluding serial stream start sign)
    
    * Example use for sending pressure3 message 
    static inline uint16_t mavlink_msg_scaled_pressure3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
					       uint32_t time_boot_ms, float press_abs, float press_diff, int16_t temperature)
    */

    /**
    * Transformation from contaminant to pressure3 message
    * Param time_boot_ms is filled with 4 objects:Concentration, Vehicle Type, Contaminant Type and Contaminant ID
    * @param time_boot_ms  => <Concentration:5digit> <Vehicle Type:1 digit> <Contaminant Type:1digit> <Contaminant ID:2digits>
    * @param press_abs  => position latitude of contaminant measurement
    * @param press_diff => position longitude of contaminant measurement
    * @param temperature => altitude of contaminant measurement
    */

    /**
    * Contaminant Information
    * TBD
    */

    // Pack contaminant message
    mavlink_msg_scaled_pressure3_pack(system_id, component_id, &msg_contaminant,
 	 					       uint32_t(((int(data->cons))*10000)+((int(data->vhcl_id))*1000)+((int(data->con_type))*100)+int(data->con_id)), float(data->lat), float(data->lon), int16_t(data->alt));
    
    mavros_msgs::mavlink::convert(msg_contaminant, ml_contaminant);
    
    //publish contaminant message
    mav_out.publish(ml_contaminant);
}

void UGVglobalCallback(const sensor_msgs::NavSatFix::ConstPtr& gps)
{
    time_stamp = ros::Time::now().nsec;
    
    // Global Position
    int32_t lat = int32_t((gps->latitude)*10000000);
    int32_t lon = int32_t((gps->longitude)*10000000);
    int32_t alt = int32_t(gps->altitude);
    int32_t rel_alt=0;
    int16_t vx=0;
    int16_t vy=0;
    int16_t vz=0;
    int16_t hdg=UINT16_MAX;

    // Pack global position message
    mavlink_msg_global_position_int_pack(system_id, component_id, &msg_position, time_stamp, lat, lon, alt, rel_alt, vx, vy, vz, hdg);
    mavros_msgs::mavlink::convert(msg_position, ml_position);

    // Pack heartbeat message
    mavlink_msg_heartbeat_pack(system_id, component_id, &msg_heartbeat, type, autopilot, base_mode, custom_mode, system_status);
    mavros_msgs::mavlink::convert(msg_heartbeat, ml_heartbeat);

    // Publish global position and hearbeat messages
    mav_out.publish(ml_heartbeat);
    mav_out.publish(ml_position);
}

int main(int argc, char **argv){

    ros::init(argc, argv, "QGCinterface");
    ros::NodeHandle n;

    mav_out = n.advertise<mavros_msgs::Mavlink>("/GCS/mavlink/from", 1000);
    contaminant = n.subscribe("/GCS/contaminant",1000,contaminantCallback);
    position = n.subscribe("/GCS/UGV_global",10,UGVglobalCallback);

    ros::spin();

    return 0;
}

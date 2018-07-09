#include "ros/ros.h"
#include "mavros_msgs/Contaminant.h"


int main(int argc, char **argv){
    
    ros::init(argc, argv, "chemical_dummy");
    ros::NodeHandle n;

    int counter, i, arah;

    mavros_msgs::Contaminant msr;
    
    msr.lat = -6.89;
    msr.lon = 107.61;
    msr.alt = 10;
    msr.cons = 2.0;
    msr.vhcl_id = 1;
    msr.con_type = 1;
    msr.con_id = 21;

    ros::Publisher chem = n.advertise<mavros_msgs::Contaminant>("/GCS/contaminant", 1);

    ros::Rate loop_rate(1);

    counter = 1;
    i = 1;
    arah = 0;

    while (ros::ok()){
        
        if (arah == 0) {    //Utara Selatan
            if((i % 2) == 1) {
                msr.lat = msr.lat + 0.0005;
            } else {
                msr.lat = msr.lat - 0.0005;
            }

            if(counter >= i) {
                arah++;
                counter = 1;
            } else {
                counter++;
            }
        } else {    //Timur Barat
            if((i % 2) == 1) {
                msr.lon = msr.lon + 0.0005;
            } else {
                msr.lon = msr.lon - 0.0005;
            }

            if(counter >= i) {
                arah = 0;
                i++;
                counter = 1;
            } else {
                counter++;
            }
        }

        msr.alt = msr.alt + 1;
        msr.cons = 6 - i;
        if(msr.cons > 4) {
            msr.cons = 0;
        }
        msr.vhcl_id = msr.vhcl_id + 1;
        if(msr.vhcl_id > 2) {
            msr.vhcl_id = 1;
        }

        chem.publish(msr);

        ros::spinOnce();

        loop_rate.sleep();

    }
    return 0;
}





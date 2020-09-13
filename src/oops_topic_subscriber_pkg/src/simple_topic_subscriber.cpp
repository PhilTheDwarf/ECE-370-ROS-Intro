#include <nav_msgs/Odometry.h>
#include <ros/ros.h>
#include <std_msgs/Int32.h>
/*
void counterCallback(const std_msgs::Int32::ConstPtr &msg) {
  ROS_INFO("%d", msg->data);
}
*/
void counterCallback(const nav_msgs::Odometry::ConstPtr &msg) {
  // ROS_INFO("%d", msg->data);
  ROS_INFO("UNCOMMENT ME PLEASE");
  // ROS_INFO("%d", msg->header.stamp);
}

int main(int argc, char **argv) {

  ros::init(argc, argv, "topic_subscriber");
  ros::NodeHandle nh;

  // ros::Subscriber sub = nh.subscribe("counter", 1000, counterCallback);
  ros::Subscriber sub = nh.subscribe("odom", 1000, counterCallback);

  ros::spin();

  return 0;
}
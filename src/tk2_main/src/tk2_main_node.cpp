#include "tk2_main/tk2_main_node.hpp"

using namespace tk2_main;

//Node main function
TK2_Main_Node::TK2_Main_Node() : Node("tk2_main_node"){
  RCLCPP_INFO(this->get_logger(), "TK2 Main Node Started!");

  //Publishers and Subscribers

  //Drive pub, to publish messages for kart to use
  drive_pub_ = this->create_publisher<tk2_msgs::msg::Kartmsg>("/kart_cmd", 10);

  //Lidar sub, recieves messages from the LiDAR
  lidar_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, 
    std::bind(&TK2_Main_Node::lidar_callback, this, std::placeholders::_1));
};

//Lidar Callback, gets called when lidar_sub_ gets a new message
void TK2_Main_Node::lidar_callback(sensor_msgs::msg::LaserScan::SharedPtr msg){
  //Create a blank message in the kartmessage format
  auto kartcmd = tk2_msgs::msg::Kartmsg();

  
  /*
    Example function
    This just throttles proportionally to the forward distance
    The further the front of the kart is to an object, the faster it will go
    This will not win you any competitions! Replace this with better code of your own.
  */
  //Set variable forward as the distance straight ahead
  double forward = msg->ranges[0];
  //Check that the value is <6m to ensure reliability, then set our forwardDistance variable to forward
  if(forward <= 6){forwardDistance = forward;}
  //Set the throttle field in the kartcmd message to 40 times the forward distance
  kartcmd.throttle = forwardDistance*40;
  

  //Publishes the kartcmd message to the "/kart_cmd" topic
  this->drive_pub_->publish(kartcmd);
}

//Starts up node
int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  rclcpp::spin(std::make_shared<tk2_main::TK2_Main_Node>());
  rclcpp::shutdown();
  return 0;
}
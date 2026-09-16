#include "tk2_main/tk2_main_node.hpp"

using namespace tk2_main;

//Main function
TK2_Main_Node::TK2_Main_Node() : Node("tk2_main_node"){
  RCLCPP_INFO(this->get_logger(), "TK2 Main Node Started!");

  //Publishers and Subscribers
  drive_pub_ = this->create_publisher<tk2_msgs::msg::Kartmsg>("/kart_cmd", 10);

  lidar_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, 
    std::bind(&TK2_Main_Node::lidar_callback, this, std::placeholders::_1));
};

//Lidar Callback, gets called when lidar_sub_ gets a new message
void TK2_Main_Node::lidar_callback(sensor_msgs::msg::LaserScan::SharedPtr msg){
  RCLCPP_INFO(this->get_logger(), "lidar callback!");
}


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  rclcpp::spin(std::make_shared<tk2_main::TK2_Main_Node>());
  rclcpp::shutdown();
  return 0;
}
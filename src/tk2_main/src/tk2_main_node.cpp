/*  Currently mostly example code copied from the ROS2 Docs.
    TODO: make this BETTER
    specifically, move code into perhaps a couple of hpp files and make a seperate file for the main.
    also, make the code actually like, relevant to the damn project.
    All in due time! -Mark

    P.S. Litterally doesnt build rn but im tired should probably get to bed, cheers!
*/


#include "tk2_main/tk2_main_node.hpp"

tk2_main::TK2_Main::TK2_Main() : Node("tk2_main_node"){
  RCLCPP_INFO(this->get_logger(), "TK2 Main Node Started!");

  drive_pub_ = this->create_publisher<tk2_msgs::msg::Kartmsg>("/kart_cmd", 10);

  auto lidar_callback = [this](const sensor_msgs::msg::LaserScan & lidar){     
      auto kartmsg = tk2_msgs::msg::Kartmsg();
      //PUT YOUR CODE HERE:

      /*
        Example code: Gets the distance immediately ahead from the lidar (lidar.ranges[0])
        Sets the throttle of the kart message to some amount based on the distance
        Message gets published and then read by the yahboom_driver node to actually set the motor
      */
      // if(lidar.ranges[0]<=12){
      //   kartmsg.throttle = lidar.ranges[0]*20;
      //   if(kartmsg.throttle > 100){kartmsg.throttle = 100;}
      // }
      // if(msg.ranges[0] < 0.2){
      //   kartmsg.throttle = -(1.0/msg.ranges[0]*3);
      // }

      drive_pub_->publish(kartmsg);
    };

  lidar_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>("scan", 10, lidar_callback);
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  rclcpp::spin(std::make_shared<tk2_main::TK2_Main>());
  rclcpp::shutdown();
  return 0;
}
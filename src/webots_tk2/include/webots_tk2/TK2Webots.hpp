#ifndef WEBOTS_ROS2_PLUGIN_EXAMPLE_HPP
#define WEBOTS_ROS2_PLUGIN_EXAMPLE_HPP

#include "rclcpp/macros.hpp"
#include "webots_ros2_driver/PluginInterface.hpp"
#include "webots_ros2_driver/WebotsNode.hpp"

#include "geometry_msgs/msg/twist.hpp"
#include "tk2_msgs/msg/kartmsg.hpp"
#include "rclcpp/subscription.hpp"

namespace webots_tk2 {
class TK2Webots : public webots_ros2_driver::PluginInterface {
public:
  void step() override;
  void init(webots_ros2_driver::WebotsNode *node,
            std::unordered_map<std::string, std::string> &parameters) override;

private:

  rclcpp::Subscription<tk2_msgs::msg::Kartmsg>::SharedPtr
      kart_cmd_subscription_;
  tk2_msgs::msg::Kartmsg kart_cmd_msg;

  WbDeviceTag right_motor;
  WbDeviceTag left_motor;
};
} // namespace webots_tk2
#endif
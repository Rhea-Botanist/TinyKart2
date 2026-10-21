#include "webots_tk2/TK2Webots.hpp"

#include "rclcpp/qos.hpp"
#include <cstdio>
#include <functional>
#include <webots/motor.h>
#include <webots/robot.h>

#define HALF_DISTANCE_BETWEEN_WHEELS 0.045
#define WHEEL_RADIUS 0.025

namespace webots_tk2 {
void TK2Webots::init(
    webots_ros2_driver::WebotsNode *node,
    std::unordered_map<std::string, std::string> &parameters) {

  right_motor = wb_robot_get_device("right wheel motor");
  left_motor = wb_robot_get_device("left wheel motor");
  right_steer = wb_robot_get_device("right steer motor");
  left_steer = wb_robot_get_device("left steer motor");

  wb_motor_set_position(left_motor, INFINITY);
  wb_motor_set_velocity(left_motor, 0.0);

  wb_motor_set_position(right_motor, INFINITY);
  wb_motor_set_velocity(right_motor, 0.0);

  wb_motor_set_position(left_steer, INFINITY);
  wb_motor_set_velocity(left_steer, 0.0);

  wb_motor_set_position(right_steer, INFINITY);
  wb_motor_set_velocity(right_steer, 0.0);

  kart_cmd_subscription_ = node->create_subscription<tk2_msgs::msg::Kartmsg>(
      "/kart_cmd", rclcpp::SensorDataQoS().reliable(),
      [this](const tk2_msgs::msg::Kartmsg::ConstSharedPtr msg){
        this->kart_cmd_msg.throttle = msg->throttle;
        // this->cmd_vel_msg.angular = msg->angular;
      }
  );
}

void TK2Webots::step() {
  auto forward_speed = kart_cmd_msg.throttle;
  auto steer = kart_cmd_msg.steering_angle;
  // auto angular_speed = kart_cmd_msg.angular.z;

  auto command_motor = forward_speed;
  auto command_steer = (steer/30)*3.14;
  // auto command_motor_right =
  //     (forward_speed + angular_speed * HALF_DISTANCE_BETWEEN_WHEELS) /
  //     WHEEL_RADIUS;

  wb_motor_set_velocity(left_motor, command_motor);
  wb_motor_set_velocity(right_motor, command_motor);
  wb_motor_set_position(right_steer, command_steer);
  wb_motor_set_position(left_steer, command_steer);
}
} // namespace my_robot_driver

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(webots_tk2::TK2Webots,
                       webots_ros2_driver::PluginInterface)
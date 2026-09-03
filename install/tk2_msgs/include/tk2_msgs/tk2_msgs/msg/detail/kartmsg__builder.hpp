// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tk2_msgs/msg/kartmsg.hpp"


#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__BUILDER_HPP_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tk2_msgs/msg/detail/kartmsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tk2_msgs
{

namespace msg
{

namespace builder
{

class Init_Kartmsg_steering_angle
{
public:
  explicit Init_Kartmsg_steering_angle(::tk2_msgs::msg::Kartmsg & msg)
  : msg_(msg)
  {}
  ::tk2_msgs::msg::Kartmsg steering_angle(::tk2_msgs::msg::Kartmsg::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tk2_msgs::msg::Kartmsg msg_;
};

class Init_Kartmsg_throttle
{
public:
  Init_Kartmsg_throttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Kartmsg_steering_angle throttle(::tk2_msgs::msg::Kartmsg::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_Kartmsg_steering_angle(msg_);
  }

private:
  ::tk2_msgs::msg::Kartmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tk2_msgs::msg::Kartmsg>()
{
  return tk2_msgs::msg::builder::Init_Kartmsg_throttle();
}

}  // namespace tk2_msgs

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__BUILDER_HPP_

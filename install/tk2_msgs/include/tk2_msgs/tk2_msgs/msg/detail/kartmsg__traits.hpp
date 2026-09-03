// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tk2_msgs/msg/kartmsg.hpp"


#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__TRAITS_HPP_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tk2_msgs/msg/detail/kartmsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tk2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Kartmsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kartmsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kartmsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tk2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tk2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tk2_msgs::msg::Kartmsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  tk2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tk2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tk2_msgs::msg::Kartmsg & msg)
{
  return tk2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tk2_msgs::msg::Kartmsg>()
{
  return "tk2_msgs::msg::Kartmsg";
}

template<>
inline const char * name<tk2_msgs::msg::Kartmsg>()
{
  return "tk2_msgs/msg/Kartmsg";
}

template<>
struct has_fixed_size<tk2_msgs::msg::Kartmsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tk2_msgs::msg::Kartmsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tk2_msgs::msg::Kartmsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__TRAITS_HPP_

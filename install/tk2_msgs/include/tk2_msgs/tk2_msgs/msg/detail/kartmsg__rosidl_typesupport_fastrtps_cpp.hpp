// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tk2_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tk2_msgs/msg/detail/kartmsg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tk2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
cdr_serialize(
  const tk2_msgs::msg::Kartmsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tk2_msgs::msg::Kartmsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
get_serialized_size(
  const tk2_msgs::msg::Kartmsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
max_serialized_size_Kartmsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
cdr_serialize_key(
  const tk2_msgs::msg::Kartmsg & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
get_serialized_size_key(
  const tk2_msgs::msg::Kartmsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
max_serialized_size_key_Kartmsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tk2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tk2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tk2_msgs, msg, Kartmsg)();

#ifdef __cplusplus
}
#endif

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

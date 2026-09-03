// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice
#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tk2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tk2_msgs/msg/detail/kartmsg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
bool cdr_serialize_tk2_msgs__msg__Kartmsg(
  const tk2_msgs__msg__Kartmsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
bool cdr_deserialize_tk2_msgs__msg__Kartmsg(
  eprosima::fastcdr::Cdr &,
  tk2_msgs__msg__Kartmsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
size_t get_serialized_size_tk2_msgs__msg__Kartmsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
size_t max_serialized_size_tk2_msgs__msg__Kartmsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
bool cdr_serialize_key_tk2_msgs__msg__Kartmsg(
  const tk2_msgs__msg__Kartmsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
size_t get_serialized_size_key_tk2_msgs__msg__Kartmsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
size_t max_serialized_size_key_tk2_msgs__msg__Kartmsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tk2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tk2_msgs, msg, Kartmsg)();

#ifdef __cplusplus
}
#endif

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tk2_msgs/msg/kartmsg.h"


#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_H_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Kartmsg in the package tk2_msgs.
typedef struct tk2_msgs__msg__Kartmsg
{
  int64_t throttle;
  int64_t steering_angle;
} tk2_msgs__msg__Kartmsg;

// Struct for a sequence of tk2_msgs__msg__Kartmsg.
typedef struct tk2_msgs__msg__Kartmsg__Sequence
{
  tk2_msgs__msg__Kartmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tk2_msgs__msg__Kartmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_H_

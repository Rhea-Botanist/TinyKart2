// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tk2_msgs/msg/detail/kartmsg__rosidl_typesupport_introspection_c.h"
#include "tk2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tk2_msgs/msg/detail/kartmsg__functions.h"
#include "tk2_msgs/msg/detail/kartmsg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tk2_msgs__msg__Kartmsg__init(message_memory);
}

void tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_fini_function(void * message_memory)
{
  tk2_msgs__msg__Kartmsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_member_array[2] = {
  {
    "throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tk2_msgs__msg__Kartmsg, throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tk2_msgs__msg__Kartmsg, steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_members = {
  "tk2_msgs__msg",  // message namespace
  "Kartmsg",  // message name
  2,  // number of fields
  sizeof(tk2_msgs__msg__Kartmsg),
  false,  // has_any_key_member_
  tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_member_array,  // message members
  tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_type_support_handle = {
  0,
  &tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_members,
  get_message_typesupport_handle_function,
  &tk2_msgs__msg__Kartmsg__get_type_hash,
  &tk2_msgs__msg__Kartmsg__get_type_description,
  &tk2_msgs__msg__Kartmsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tk2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tk2_msgs, msg, Kartmsg)() {
  if (!tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_type_support_handle.typesupport_identifier) {
    tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tk2_msgs__msg__Kartmsg__rosidl_typesupport_introspection_c__Kartmsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tk2_msgs/msg/detail/kartmsg__functions.h"
#include "tk2_msgs/msg/detail/kartmsg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tk2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Kartmsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tk2_msgs::msg::Kartmsg(_init);
}

void Kartmsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tk2_msgs::msg::Kartmsg *>(message_memory);
  typed_message->~Kartmsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Kartmsg_message_member_array[2] = {
  {
    "throttle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tk2_msgs::msg::Kartmsg, throttle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tk2_msgs::msg::Kartmsg, steering_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Kartmsg_message_members = {
  "tk2_msgs::msg",  // message namespace
  "Kartmsg",  // message name
  2,  // number of fields
  sizeof(tk2_msgs::msg::Kartmsg),
  false,  // has_any_key_member_
  Kartmsg_message_member_array,  // message members
  Kartmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  Kartmsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Kartmsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Kartmsg_message_members,
  get_message_typesupport_handle_function,
  &tk2_msgs__msg__Kartmsg__get_type_hash,
  &tk2_msgs__msg__Kartmsg__get_type_description,
  &tk2_msgs__msg__Kartmsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tk2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tk2_msgs::msg::Kartmsg>()
{
  return &::tk2_msgs::msg::rosidl_typesupport_introspection_cpp::Kartmsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tk2_msgs, msg, Kartmsg)() {
  return &::tk2_msgs::msg::rosidl_typesupport_introspection_cpp::Kartmsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

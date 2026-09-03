// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

#include "tk2_msgs/msg/detail/kartmsg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tk2_msgs
const rosidl_type_hash_t *
tk2_msgs__msg__Kartmsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0xf1, 0x2e, 0xd6, 0x4c, 0xbf, 0xef, 0x85,
      0x83, 0xa5, 0x7f, 0x2d, 0x3a, 0x6c, 0x99, 0xf7,
      0x21, 0xea, 0xde, 0x53, 0xb1, 0x40, 0xde, 0x36,
      0xae, 0xbd, 0x92, 0x90, 0xc8, 0x00, 0x12, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tk2_msgs__msg__Kartmsg__TYPE_NAME[] = "tk2_msgs/msg/Kartmsg";

// Define type names, field names, and default values
static char tk2_msgs__msg__Kartmsg__FIELD_NAME__throttle[] = "throttle";
static char tk2_msgs__msg__Kartmsg__DEFAULT_VALUE__throttle[] = "0";
static char tk2_msgs__msg__Kartmsg__FIELD_NAME__steering_angle[] = "steering_angle";
static char tk2_msgs__msg__Kartmsg__DEFAULT_VALUE__steering_angle[] = "90";

static rosidl_runtime_c__type_description__Field tk2_msgs__msg__Kartmsg__FIELDS[] = {
  {
    {tk2_msgs__msg__Kartmsg__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {tk2_msgs__msg__Kartmsg__DEFAULT_VALUE__throttle, 1, 1},
  },
  {
    {tk2_msgs__msg__Kartmsg__FIELD_NAME__steering_angle, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {tk2_msgs__msg__Kartmsg__DEFAULT_VALUE__steering_angle, 2, 2},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tk2_msgs__msg__Kartmsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tk2_msgs__msg__Kartmsg__TYPE_NAME, 20, 20},
      {tk2_msgs__msg__Kartmsg__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 throttle 0\n"
  "int64 steering_angle 90";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tk2_msgs__msg__Kartmsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tk2_msgs__msg__Kartmsg__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tk2_msgs__msg__Kartmsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tk2_msgs__msg__Kartmsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice
#include "tk2_msgs/msg/detail/kartmsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tk2_msgs__msg__Kartmsg__init(tk2_msgs__msg__Kartmsg * msg)
{
  if (!msg) {
    return false;
  }
  // throttle
  msg->throttle = 0ll;
  // steering_angle
  msg->steering_angle = 90ll;
  return true;
}

void
tk2_msgs__msg__Kartmsg__fini(tk2_msgs__msg__Kartmsg * msg)
{
  if (!msg) {
    return;
  }
  // throttle
  // steering_angle
}

bool
tk2_msgs__msg__Kartmsg__are_equal(const tk2_msgs__msg__Kartmsg * lhs, const tk2_msgs__msg__Kartmsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  return true;
}

bool
tk2_msgs__msg__Kartmsg__copy(
  const tk2_msgs__msg__Kartmsg * input,
  tk2_msgs__msg__Kartmsg * output)
{
  if (!input || !output) {
    return false;
  }
  // throttle
  output->throttle = input->throttle;
  // steering_angle
  output->steering_angle = input->steering_angle;
  return true;
}

tk2_msgs__msg__Kartmsg *
tk2_msgs__msg__Kartmsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tk2_msgs__msg__Kartmsg * msg = (tk2_msgs__msg__Kartmsg *)allocator.allocate(sizeof(tk2_msgs__msg__Kartmsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tk2_msgs__msg__Kartmsg));
  bool success = tk2_msgs__msg__Kartmsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tk2_msgs__msg__Kartmsg__destroy(tk2_msgs__msg__Kartmsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tk2_msgs__msg__Kartmsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tk2_msgs__msg__Kartmsg__Sequence__init(tk2_msgs__msg__Kartmsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tk2_msgs__msg__Kartmsg * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(tk2_msgs__msg__Kartmsg)) {
      return false;
    }
    data = (tk2_msgs__msg__Kartmsg *)allocator.zero_allocate(size, sizeof(tk2_msgs__msg__Kartmsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tk2_msgs__msg__Kartmsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tk2_msgs__msg__Kartmsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tk2_msgs__msg__Kartmsg__Sequence__fini(tk2_msgs__msg__Kartmsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tk2_msgs__msg__Kartmsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tk2_msgs__msg__Kartmsg__Sequence *
tk2_msgs__msg__Kartmsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tk2_msgs__msg__Kartmsg__Sequence * array = (tk2_msgs__msg__Kartmsg__Sequence *)allocator.allocate(sizeof(tk2_msgs__msg__Kartmsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tk2_msgs__msg__Kartmsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tk2_msgs__msg__Kartmsg__Sequence__destroy(tk2_msgs__msg__Kartmsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tk2_msgs__msg__Kartmsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tk2_msgs__msg__Kartmsg__Sequence__are_equal(const tk2_msgs__msg__Kartmsg__Sequence * lhs, const tk2_msgs__msg__Kartmsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tk2_msgs__msg__Kartmsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tk2_msgs__msg__Kartmsg__Sequence__copy(
  const tk2_msgs__msg__Kartmsg__Sequence * input,
  tk2_msgs__msg__Kartmsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(tk2_msgs__msg__Kartmsg)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(tk2_msgs__msg__Kartmsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tk2_msgs__msg__Kartmsg * data =
      (tk2_msgs__msg__Kartmsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tk2_msgs__msg__Kartmsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tk2_msgs__msg__Kartmsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tk2_msgs__msg__Kartmsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

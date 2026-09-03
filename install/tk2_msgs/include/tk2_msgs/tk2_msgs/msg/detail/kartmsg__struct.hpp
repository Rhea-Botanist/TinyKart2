// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tk2_msgs:msg/Kartmsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tk2_msgs/msg/kartmsg.hpp"


#ifndef TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_HPP_
#define TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tk2_msgs__msg__Kartmsg __attribute__((deprecated))
#else
# define DEPRECATED__tk2_msgs__msg__Kartmsg __declspec(deprecated)
#endif

namespace tk2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Kartmsg_
{
  using Type = Kartmsg_<ContainerAllocator>;

  explicit Kartmsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->throttle = 0ll;
      this->steering_angle = 90ll;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->throttle = 0ll;
      this->steering_angle = 0ll;
    }
  }

  explicit Kartmsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->throttle = 0ll;
      this->steering_angle = 90ll;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->throttle = 0ll;
      this->steering_angle = 0ll;
    }
  }

  // field types and members
  using _throttle_type =
    int64_t;
  _throttle_type throttle;
  using _steering_angle_type =
    int64_t;
  _steering_angle_type steering_angle;

  // setters for named parameter idiom
  Type & set__throttle(
    const int64_t & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const int64_t & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tk2_msgs::msg::Kartmsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const tk2_msgs::msg::Kartmsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tk2_msgs::msg::Kartmsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tk2_msgs::msg::Kartmsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tk2_msgs__msg__Kartmsg
    std::shared_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tk2_msgs__msg__Kartmsg
    std::shared_ptr<tk2_msgs::msg::Kartmsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kartmsg_ & other) const
  {
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kartmsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kartmsg_

// alias to use template instance with default allocator
using Kartmsg =
  tk2_msgs::msg::Kartmsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tk2_msgs

#endif  // TK2_MSGS__MSG__DETAIL__KARTMSG__STRUCT_HPP_

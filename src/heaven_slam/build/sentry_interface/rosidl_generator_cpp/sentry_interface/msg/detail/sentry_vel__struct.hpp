// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_interface__msg__SentryVel __attribute__((deprecated))
#else
# define DEPRECATED__sentry_interface__msg__SentryVel __declspec(deprecated)
#endif

namespace sentry_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SentryVel_
{
  using Type = SentryVel_<ContainerAllocator>;

  explicit SentryVel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->angle_yaw = 0.0f;
    }
  }

  explicit SentryVel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x = 0.0f;
      this->vel_y = 0.0f;
      this->vel_z = 0.0f;
      this->angle_yaw = 0.0f;
    }
  }

  // field types and members
  using _vel_x_type =
    float;
  _vel_x_type vel_x;
  using _vel_y_type =
    float;
  _vel_y_type vel_y;
  using _vel_z_type =
    float;
  _vel_z_type vel_z;
  using _angle_yaw_type =
    float;
  _angle_yaw_type angle_yaw;

  // setters for named parameter idiom
  Type & set__vel_x(
    const float & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const float & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__vel_z(
    const float & _arg)
  {
    this->vel_z = _arg;
    return *this;
  }
  Type & set__angle_yaw(
    const float & _arg)
  {
    this->angle_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sentry_interface::msg::SentryVel_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_interface::msg::SentryVel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_interface::msg::SentryVel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_interface::msg::SentryVel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_interface__msg__SentryVel
    std::shared_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_interface__msg__SentryVel
    std::shared_ptr<sentry_interface::msg::SentryVel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SentryVel_ & other) const
  {
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->vel_z != other.vel_z) {
      return false;
    }
    if (this->angle_yaw != other.angle_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const SentryVel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SentryVel_

// alias to use template instance with default allocator
using SentryVel =
  sentry_interface::msg::SentryVel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sentry_interface

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_HPP_

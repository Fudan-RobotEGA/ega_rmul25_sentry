// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sentry_interface__msg__SentryStatus __attribute__((deprecated))
#else
# define DEPRECATED__sentry_interface__msg__SentryStatus __declspec(deprecated)
#endif

namespace sentry_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SentryStatus_
{
  using Type = SentryStatus_<ContainerAllocator>;

  explicit SentryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_stage = 0;
      this->gain_area_detected = 0;
      this->gain_area_status = 0;
      this->supply_area_status = 0;
      this->stage_time_remain = 0;
      this->current_hp = 0;
      this->rotate_flag = 0;
    }
  }

  explicit SentryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_stage = 0;
      this->gain_area_detected = 0;
      this->gain_area_status = 0;
      this->supply_area_status = 0;
      this->stage_time_remain = 0;
      this->current_hp = 0;
      this->rotate_flag = 0;
    }
  }

  // field types and members
  using _game_stage_type =
    int8_t;
  _game_stage_type game_stage;
  using _gain_area_detected_type =
    int8_t;
  _gain_area_detected_type gain_area_detected;
  using _gain_area_status_type =
    int8_t;
  _gain_area_status_type gain_area_status;
  using _supply_area_status_type =
    int8_t;
  _supply_area_status_type supply_area_status;
  using _stage_time_remain_type =
    int16_t;
  _stage_time_remain_type stage_time_remain;
  using _current_hp_type =
    int16_t;
  _current_hp_type current_hp;
  using _rotate_flag_type =
    int16_t;
  _rotate_flag_type rotate_flag;

  // setters for named parameter idiom
  Type & set__game_stage(
    const int8_t & _arg)
  {
    this->game_stage = _arg;
    return *this;
  }
  Type & set__gain_area_detected(
    const int8_t & _arg)
  {
    this->gain_area_detected = _arg;
    return *this;
  }
  Type & set__gain_area_status(
    const int8_t & _arg)
  {
    this->gain_area_status = _arg;
    return *this;
  }
  Type & set__supply_area_status(
    const int8_t & _arg)
  {
    this->supply_area_status = _arg;
    return *this;
  }
  Type & set__stage_time_remain(
    const int16_t & _arg)
  {
    this->stage_time_remain = _arg;
    return *this;
  }
  Type & set__current_hp(
    const int16_t & _arg)
  {
    this->current_hp = _arg;
    return *this;
  }
  Type & set__rotate_flag(
    const int16_t & _arg)
  {
    this->rotate_flag = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t STATUS_ATTACKING =
    3u;
  static constexpr uint32_t STATUS_RETREATING =
    4u;
  static constexpr uint32_t STATUS_DEFENDING =
    5u;
  static constexpr uint32_t STATUS_HEALING =
    6u;

  // pointer types
  using RawPtr =
    sentry_interface::msg::SentryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_interface::msg::SentryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_interface::msg::SentryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_interface::msg::SentryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_interface__msg__SentryStatus
    std::shared_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_interface__msg__SentryStatus
    std::shared_ptr<sentry_interface::msg::SentryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SentryStatus_ & other) const
  {
    if (this->game_stage != other.game_stage) {
      return false;
    }
    if (this->gain_area_detected != other.gain_area_detected) {
      return false;
    }
    if (this->gain_area_status != other.gain_area_status) {
      return false;
    }
    if (this->supply_area_status != other.supply_area_status) {
      return false;
    }
    if (this->stage_time_remain != other.stage_time_remain) {
      return false;
    }
    if (this->current_hp != other.current_hp) {
      return false;
    }
    if (this->rotate_flag != other.rotate_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const SentryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SentryStatus_

// alias to use template instance with default allocator
using SentryStatus =
  sentry_interface::msg::SentryStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SentryStatus_<ContainerAllocator>::STATUS_ATTACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SentryStatus_<ContainerAllocator>::STATUS_RETREATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SentryStatus_<ContainerAllocator>::STATUS_DEFENDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t SentryStatus_<ContainerAllocator>::STATUS_HEALING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_interface

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_HPP_

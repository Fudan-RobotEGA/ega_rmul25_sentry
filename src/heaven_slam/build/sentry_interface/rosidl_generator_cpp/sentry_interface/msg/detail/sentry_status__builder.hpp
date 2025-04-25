// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__BUILDER_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_interface/msg/detail/sentry_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_interface
{

namespace msg
{

namespace builder
{

class Init_SentryStatus_rotate_flag
{
public:
  explicit Init_SentryStatus_rotate_flag(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  ::sentry_interface::msg::SentryStatus rotate_flag(::sentry_interface::msg::SentryStatus::_rotate_flag_type arg)
  {
    msg_.rotate_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_current_hp
{
public:
  explicit Init_SentryStatus_current_hp(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  Init_SentryStatus_rotate_flag current_hp(::sentry_interface::msg::SentryStatus::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_SentryStatus_rotate_flag(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_stage_time_remain
{
public:
  explicit Init_SentryStatus_stage_time_remain(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  Init_SentryStatus_current_hp stage_time_remain(::sentry_interface::msg::SentryStatus::_stage_time_remain_type arg)
  {
    msg_.stage_time_remain = std::move(arg);
    return Init_SentryStatus_current_hp(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_supply_area_status
{
public:
  explicit Init_SentryStatus_supply_area_status(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  Init_SentryStatus_stage_time_remain supply_area_status(::sentry_interface::msg::SentryStatus::_supply_area_status_type arg)
  {
    msg_.supply_area_status = std::move(arg);
    return Init_SentryStatus_stage_time_remain(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_gain_area_status
{
public:
  explicit Init_SentryStatus_gain_area_status(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  Init_SentryStatus_supply_area_status gain_area_status(::sentry_interface::msg::SentryStatus::_gain_area_status_type arg)
  {
    msg_.gain_area_status = std::move(arg);
    return Init_SentryStatus_supply_area_status(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_gain_area_detected
{
public:
  explicit Init_SentryStatus_gain_area_detected(::sentry_interface::msg::SentryStatus & msg)
  : msg_(msg)
  {}
  Init_SentryStatus_gain_area_status gain_area_detected(::sentry_interface::msg::SentryStatus::_gain_area_detected_type arg)
  {
    msg_.gain_area_detected = std::move(arg);
    return Init_SentryStatus_gain_area_status(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

class Init_SentryStatus_game_stage
{
public:
  Init_SentryStatus_game_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SentryStatus_gain_area_detected game_stage(::sentry_interface::msg::SentryStatus::_game_stage_type arg)
  {
    msg_.game_stage = std::move(arg);
    return Init_SentryStatus_gain_area_detected(msg_);
  }

private:
  ::sentry_interface::msg::SentryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::msg::SentryStatus>()
{
  return sentry_interface::msg::builder::Init_SentryStatus_game_stage();
}

}  // namespace sentry_interface

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__BUILDER_HPP_

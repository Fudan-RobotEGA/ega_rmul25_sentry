// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__BUILDER_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_interface/msg/detail/sentry_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_interface
{

namespace msg
{

namespace builder
{

class Init_SentryVel_angle_yaw
{
public:
  explicit Init_SentryVel_angle_yaw(::sentry_interface::msg::SentryVel & msg)
  : msg_(msg)
  {}
  ::sentry_interface::msg::SentryVel angle_yaw(::sentry_interface::msg::SentryVel::_angle_yaw_type arg)
  {
    msg_.angle_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::msg::SentryVel msg_;
};

class Init_SentryVel_vel_z
{
public:
  explicit Init_SentryVel_vel_z(::sentry_interface::msg::SentryVel & msg)
  : msg_(msg)
  {}
  Init_SentryVel_angle_yaw vel_z(::sentry_interface::msg::SentryVel::_vel_z_type arg)
  {
    msg_.vel_z = std::move(arg);
    return Init_SentryVel_angle_yaw(msg_);
  }

private:
  ::sentry_interface::msg::SentryVel msg_;
};

class Init_SentryVel_vel_y
{
public:
  explicit Init_SentryVel_vel_y(::sentry_interface::msg::SentryVel & msg)
  : msg_(msg)
  {}
  Init_SentryVel_vel_z vel_y(::sentry_interface::msg::SentryVel::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_SentryVel_vel_z(msg_);
  }

private:
  ::sentry_interface::msg::SentryVel msg_;
};

class Init_SentryVel_vel_x
{
public:
  Init_SentryVel_vel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SentryVel_vel_y vel_x(::sentry_interface::msg::SentryVel::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_SentryVel_vel_y(msg_);
  }

private:
  ::sentry_interface::msg::SentryVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::msg::SentryVel>()
{
  return sentry_interface::msg::builder::Init_SentryVel_vel_x();
}

}  // namespace sentry_interface

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__BUILDER_HPP_

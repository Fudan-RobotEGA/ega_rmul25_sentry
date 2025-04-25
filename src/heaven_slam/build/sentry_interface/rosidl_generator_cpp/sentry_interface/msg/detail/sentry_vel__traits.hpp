// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__TRAITS_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_interface/msg/detail/sentry_vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentry_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SentryVel & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel_x
  {
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << ", ";
  }

  // member: vel_y
  {
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << ", ";
  }

  // member: vel_z
  {
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << ", ";
  }

  // member: angle_yaw
  {
    out << "angle_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SentryVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << "\n";
  }

  // member: vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << "\n";
  }

  // member: vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_z, out);
    out << "\n";
  }

  // member: angle_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SentryVel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::msg::SentryVel & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::msg::SentryVel & msg)
{
  return sentry_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::msg::SentryVel>()
{
  return "sentry_interface::msg::SentryVel";
}

template<>
inline const char * name<sentry_interface::msg::SentryVel>()
{
  return "sentry_interface/msg/SentryVel";
}

template<>
struct has_fixed_size<sentry_interface::msg::SentryVel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_interface::msg::SentryVel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_interface::msg::SentryVel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__TRAITS_HPP_

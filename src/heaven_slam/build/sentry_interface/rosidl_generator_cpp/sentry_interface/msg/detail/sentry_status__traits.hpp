// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__TRAITS_HPP_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_interface/msg/detail/sentry_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentry_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const SentryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_stage
  {
    out << "game_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.game_stage, out);
    out << ", ";
  }

  // member: gain_area_detected
  {
    out << "gain_area_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_area_detected, out);
    out << ", ";
  }

  // member: gain_area_status
  {
    out << "gain_area_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_area_status, out);
    out << ", ";
  }

  // member: supply_area_status
  {
    out << "supply_area_status: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_area_status, out);
    out << ", ";
  }

  // member: stage_time_remain
  {
    out << "stage_time_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_time_remain, out);
    out << ", ";
  }

  // member: current_hp
  {
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << ", ";
  }

  // member: rotate_flag
  {
    out << "rotate_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SentryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_stage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_stage: ";
    rosidl_generator_traits::value_to_yaml(msg.game_stage, out);
    out << "\n";
  }

  // member: gain_area_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_area_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_area_detected, out);
    out << "\n";
  }

  // member: gain_area_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gain_area_status: ";
    rosidl_generator_traits::value_to_yaml(msg.gain_area_status, out);
    out << "\n";
  }

  // member: supply_area_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_area_status: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_area_status, out);
    out << "\n";
  }

  // member: stage_time_remain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_time_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_time_remain, out);
    out << "\n";
  }

  // member: current_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << "\n";
  }

  // member: rotate_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotate_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rotate_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SentryStatus & msg, bool use_flow_style = false)
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
  const sentry_interface::msg::SentryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::msg::SentryStatus & msg)
{
  return sentry_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::msg::SentryStatus>()
{
  return "sentry_interface::msg::SentryStatus";
}

template<>
inline const char * name<sentry_interface::msg::SentryStatus>()
{
  return "sentry_interface/msg/SentryStatus";
}

template<>
struct has_fixed_size<sentry_interface::msg::SentryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_interface::msg::SentryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_interface::msg::SentryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__TRAITS_HPP_

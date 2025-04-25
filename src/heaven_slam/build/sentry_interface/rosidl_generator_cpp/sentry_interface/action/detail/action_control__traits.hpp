// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sentry_interface:action/ActionControl.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__TRAITS_HPP_
#define SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sentry_interface/action/detail/action_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: chassic_target
  {
    if (msg.chassic_target.size() == 0) {
      out << "chassic_target: []";
    } else {
      out << "chassic_target: [";
      size_t pending_items = msg.chassic_target.size();
      for (auto item : msg.chassic_target) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_angel
  {
    out << "yaw_angel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angel, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chassic_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.chassic_target.size() == 0) {
      out << "chassic_target: []\n";
    } else {
      out << "chassic_target:\n";
      for (auto item : msg.chassic_target) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw_angel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angel: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_angel, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_Goal & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_Goal>()
{
  return "sentry_interface::action::ActionControl_Goal";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_Goal>()
{
  return "sentry_interface/action/ActionControl_Goal";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_interface::action::ActionControl_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_Result & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_Result>()
{
  return "sentry_interface::action::ActionControl_Result";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_Result>()
{
  return "sentry_interface/action/ActionControl_Result";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_interface::action::ActionControl_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_pose
  {
    if (msg.current_pose.size() == 0) {
      out << "current_pose: []";
    } else {
      out << "current_pose: [";
      size_t pending_items = msg.current_pose.size();
      for (auto item : msg.current_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_status
  {
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_pose.size() == 0) {
      out << "current_pose: []\n";
    } else {
      out << "current_pose:\n";
      for (auto item : msg.current_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_Feedback & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_Feedback>()
{
  return "sentry_interface::action::ActionControl_Feedback";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_Feedback>()
{
  return "sentry_interface/action/ActionControl_Feedback";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sentry_interface::action::ActionControl_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "sentry_interface/action/detail/action_control__traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_SendGoal_Request & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_SendGoal_Request>()
{
  return "sentry_interface::action::ActionControl_SendGoal_Request";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_SendGoal_Request>()
{
  return "sentry_interface/action/ActionControl_SendGoal_Request";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<sentry_interface::action::ActionControl_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<sentry_interface::action::ActionControl_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sentry_interface::action::ActionControl_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_SendGoal_Response & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_SendGoal_Response>()
{
  return "sentry_interface::action::ActionControl_SendGoal_Response";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_SendGoal_Response>()
{
  return "sentry_interface/action/ActionControl_SendGoal_Response";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<sentry_interface::action::ActionControl_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sentry_interface::action::ActionControl_SendGoal>()
{
  return "sentry_interface::action::ActionControl_SendGoal";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_SendGoal>()
{
  return "sentry_interface/action/ActionControl_SendGoal";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<sentry_interface::action::ActionControl_SendGoal_Request>::value &&
    has_fixed_size<sentry_interface::action::ActionControl_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<sentry_interface::action::ActionControl_SendGoal_Request>::value &&
    has_bounded_size<sentry_interface::action::ActionControl_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<sentry_interface::action::ActionControl_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<sentry_interface::action::ActionControl_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sentry_interface::action::ActionControl_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_GetResult_Request & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_GetResult_Request>()
{
  return "sentry_interface::action::ActionControl_GetResult_Request";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_GetResult_Request>()
{
  return "sentry_interface/action/ActionControl_GetResult_Request";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sentry_interface::action::ActionControl_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "sentry_interface/action/detail/action_control__traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_GetResult_Response & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_GetResult_Response>()
{
  return "sentry_interface::action::ActionControl_GetResult_Response";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_GetResult_Response>()
{
  return "sentry_interface/action/ActionControl_GetResult_Response";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<sentry_interface::action::ActionControl_Result>::value> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<sentry_interface::action::ActionControl_Result>::value> {};

template<>
struct is_message<sentry_interface::action::ActionControl_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sentry_interface::action::ActionControl_GetResult>()
{
  return "sentry_interface::action::ActionControl_GetResult";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_GetResult>()
{
  return "sentry_interface/action/ActionControl_GetResult";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<sentry_interface::action::ActionControl_GetResult_Request>::value &&
    has_fixed_size<sentry_interface::action::ActionControl_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<sentry_interface::action::ActionControl_GetResult_Request>::value &&
    has_bounded_size<sentry_interface::action::ActionControl_GetResult_Response>::value
  >
{
};

template<>
struct is_service<sentry_interface::action::ActionControl_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<sentry_interface::action::ActionControl_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sentry_interface::action::ActionControl_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "sentry_interface/action/detail/action_control__traits.hpp"

namespace sentry_interface
{

namespace action
{

inline void to_flow_style_yaml(
  const ActionControl_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionControl_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace sentry_interface

namespace rosidl_generator_traits
{

[[deprecated("use sentry_interface::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sentry_interface::action::ActionControl_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  sentry_interface::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sentry_interface::action::to_yaml() instead")]]
inline std::string to_yaml(const sentry_interface::action::ActionControl_FeedbackMessage & msg)
{
  return sentry_interface::action::to_yaml(msg);
}

template<>
inline const char * data_type<sentry_interface::action::ActionControl_FeedbackMessage>()
{
  return "sentry_interface::action::ActionControl_FeedbackMessage";
}

template<>
inline const char * name<sentry_interface::action::ActionControl_FeedbackMessage>()
{
  return "sentry_interface/action/ActionControl_FeedbackMessage";
}

template<>
struct has_fixed_size<sentry_interface::action::ActionControl_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<sentry_interface::action::ActionControl_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<sentry_interface::action::ActionControl_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<sentry_interface::action::ActionControl_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<sentry_interface::action::ActionControl_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<sentry_interface::action::ActionControl>
  : std::true_type
{
};

template<>
struct is_action_goal<sentry_interface::action::ActionControl_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<sentry_interface::action::ActionControl_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<sentry_interface::action::ActionControl_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/control_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::ControlInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: lookahead_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lookahead_distance: ";
    value_to_yaml(msg.lookahead_distance, out);
    out << "\n";
  }

  // member: vx_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_desired: ";
    value_to_yaml(msg.vx_desired, out);
    out << "\n";
  }

  // member: lap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap: ";
    value_to_yaml(msg.lap, out);
    out << "\n";
  }

  // member: map_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_available: ";
    value_to_yaml(msg.map_available, out);
    out << "\n";
  }

  // member: finalization_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finalization_trigger: ";
    value_to_yaml(msg.finalization_trigger, out);
    out << "\n";
  }

  // member: seconds_to_cross_finish_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds_to_cross_finish_line: ";
    value_to_yaml(msg.seconds_to_cross_finish_line, out);
    out << "\n";
  }

  // member: anti_delft_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anti_delft_gain: ";
    value_to_yaml(msg.anti_delft_gain, out);
    out << "\n";
  }

  // member: finish_dist_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish_dist_thresh: ";
    value_to_yaml(msg.finish_dist_thresh, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: seconds_passed_since_finalization_trigger
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds_passed_since_finalization_trigger: ";
    value_to_yaml(msg.seconds_passed_since_finalization_trigger, out);
    out << "\n";
  }

  // member: heading_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_condition: ";
    value_to_yaml(msg.heading_condition, out);
    out << "\n";
  }

  // member: startline_pose_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startline_pose_heading: ";
    value_to_yaml(msg.startline_pose_heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::ControlInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::ControlInfo>()
{
  return "turtle_interfaces::msg::ControlInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::ControlInfo>()
{
  return "turtle_interfaces/msg/ControlInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::ControlInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::ControlInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::ControlInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__TRAITS_HPP_

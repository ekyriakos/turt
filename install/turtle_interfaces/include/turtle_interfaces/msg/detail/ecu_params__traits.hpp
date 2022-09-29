// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/ecu_params__struct.hpp"
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
  const turtle_interfaces::msg::ECUParams & msg,
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

  // member: inverter_rpm_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inverter_rpm_percentage: ";
    value_to_yaml(msg.inverter_rpm_percentage, out);
    out << "\n";
  }

  // member: inverter_i_rms_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inverter_i_rms_max: ";
    value_to_yaml(msg.inverter_i_rms_max, out);
    out << "\n";
  }

  // member: inverter_i_rms_max_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inverter_i_rms_max_brake: ";
    value_to_yaml(msg.inverter_i_rms_max_brake, out);
    out << "\n";
  }

  // member: power_target_kw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_target_kw: ";
    value_to_yaml(msg.power_target_kw, out);
    out << "\n";
  }

  // member: servo_start_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_start_speed: ";
    value_to_yaml(msg.servo_start_speed, out);
    out << "\n";
  }

  // member: regen_min_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regen_min_speed: ";
    value_to_yaml(msg.regen_min_speed, out);
    out << "\n";
  }

  // member: ed_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ed_enable: ";
    value_to_yaml(msg.ed_enable, out);
    out << "\n";
  }

  // member: tc_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tc_enable: ";
    value_to_yaml(msg.tc_enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::ECUParams & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::ECUParams>()
{
  return "turtle_interfaces::msg::ECUParams";
}

template<>
inline const char * name<turtle_interfaces::msg::ECUParams>()
{
  return "turtle_interfaces/msg/ECUParams";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::ECUParams>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::ECUParams>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::ECUParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__TRAITS_HPP_

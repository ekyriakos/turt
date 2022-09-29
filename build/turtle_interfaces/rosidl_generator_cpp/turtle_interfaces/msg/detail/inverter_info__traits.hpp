// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/InverterInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/inverter_info__struct.hpp"
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
  const turtle_interfaces::msg::InverterInfo & msg,
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

  // member: igbts_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "igbts_temp: ";
    value_to_yaml(msg.igbts_temp, out);
    out << "\n";
  }

  // member: irms_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "irms_max: ";
    value_to_yaml(msg.irms_max, out);
    out << "\n";
  }

  // member: i_lim_in_use
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_lim_in_use: ";
    value_to_yaml(msg.i_lim_in_use, out);
    out << "\n";
  }

  // member: motor_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temp: ";
    value_to_yaml(msg.motor_temp, out);
    out << "\n";
  }

  // member: irms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "irms: ";
    value_to_yaml(msg.irms, out);
    out << "\n";
  }

  // member: max_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_rpm: ";
    value_to_yaml(msg.max_rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::InverterInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::InverterInfo>()
{
  return "turtle_interfaces::msg::InverterInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::InverterInfo>()
{
  return "turtle_interfaces/msg/InverterInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::InverterInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::InverterInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::InverterInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__TRAITS_HPP_

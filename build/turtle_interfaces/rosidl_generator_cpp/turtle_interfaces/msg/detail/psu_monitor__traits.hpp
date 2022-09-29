// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/PsuMonitor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/psu_monitor__struct.hpp"
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
  const turtle_interfaces::msg::PsuMonitor & msg,
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

  // member: v_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_in: ";
    value_to_yaml(msg.v_in, out);
    out << "\n";
  }

  // member: v_ignition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_ignition: ";
    value_to_yaml(msg.v_ignition, out);
    out << "\n";
  }

  // member: v3_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v3_3: ";
    value_to_yaml(msg.v3_3, out);
    out << "\n";
  }

  // member: v5_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v5_0: ";
    value_to_yaml(msg.v5_0, out);
    out << "\n";
  }

  // member: v12_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v12_0: ";
    value_to_yaml(msg.v12_0, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::PsuMonitor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::PsuMonitor>()
{
  return "turtle_interfaces::msg::PsuMonitor";
}

template<>
inline const char * name<turtle_interfaces::msg::PsuMonitor>()
{
  return "turtle_interfaces/msg/PsuMonitor";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::PsuMonitor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::PsuMonitor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::PsuMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__TRAITS_HPP_

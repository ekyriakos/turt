// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/CoolingInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/cooling_info__struct.hpp"
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
  const turtle_interfaces::msg::CoolingInfo & msg,
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

  // member: pumpsignal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pumpsignal: ";
    value_to_yaml(msg.pumpsignal, out);
    out << "\n";
  }

  // member: accufanspwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accufanspwm: ";
    value_to_yaml(msg.accufanspwm, out);
    out << "\n";
  }

  // member: hallfanpwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hallfanpwm: ";
    value_to_yaml(msg.hallfanpwm, out);
    out << "\n";
  }

  // member: chassisfans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassisfans: ";
    value_to_yaml(msg.chassisfans, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::CoolingInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::CoolingInfo>()
{
  return "turtle_interfaces::msg::CoolingInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::CoolingInfo>()
{
  return "turtle_interfaces/msg/CoolingInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::CoolingInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::CoolingInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::CoolingInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__COOLING_INFO__TRAITS_HPP_

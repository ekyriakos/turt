// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/DashButtons.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/dash_buttons__struct.hpp"
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
  const turtle_interfaces::msg::DashButtons & msg,
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

  // member: enabletoggle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabletoggle: ";
    value_to_yaml(msg.enabletoggle, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: adact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adact: ";
    value_to_yaml(msg.adact, out);
    out << "\n";
  }

  // member: cooling_button
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cooling_button: ";
    value_to_yaml(msg.cooling_button, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::DashButtons & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::DashButtons>()
{
  return "turtle_interfaces::msg::DashButtons";
}

template<>
inline const char * name<turtle_interfaces::msg::DashButtons>()
{
  return "turtle_interfaces/msg/DashButtons";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::DashButtons>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::DashButtons>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::DashButtons>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DASH_BUTTONS__TRAITS_HPP_

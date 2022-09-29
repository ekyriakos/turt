// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/mission__struct.hpp"
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
  const turtle_interfaces::msg::Mission & msg,
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

  // member: mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission: ";
    value_to_yaml(msg.mission, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::Mission & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::Mission>()
{
  return "turtle_interfaces::msg::Mission";
}

template<>
inline const char * name<turtle_interfaces::msg::Mission>()
{
  return "turtle_interfaces/msg/Mission";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::Mission>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::Mission>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::Mission>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION__TRAITS_HPP_

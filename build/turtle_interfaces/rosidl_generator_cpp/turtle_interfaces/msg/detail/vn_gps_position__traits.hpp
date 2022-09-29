// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/VnGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/vn_gps_position__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'position'
// Member 'positionu'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::VnGpsPosition & msg,
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

  // member: num_sats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sats: ";
    value_to_yaml(msg.num_sats, out);
    out << "\n";
  }

  // member: fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix: ";
    value_to_yaml(msg.fix, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: positionu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "positionu:\n";
    to_yaml(msg.positionu, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::VnGpsPosition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::VnGpsPosition>()
{
  return "turtle_interfaces::msg::VnGpsPosition";
}

template<>
inline const char * name<turtle_interfaces::msg::VnGpsPosition>()
{
  return "turtle_interfaces/msg/VnGpsPosition";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::VnGpsPosition>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::VnGpsPosition>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::VnGpsPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__VN_GPS_POSITION__TRAITS_HPP_

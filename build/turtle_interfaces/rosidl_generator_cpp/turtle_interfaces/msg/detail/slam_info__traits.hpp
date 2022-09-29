// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/SlamInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/slam_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'slam_statistics'
#include "turtle_interfaces/msg/detail/slam_statistics__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::SlamInfo & msg,
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

  // member: slam_statistics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slam_statistics:\n";
    to_yaml(msg.slam_statistics, out, indentation + 2);
  }

  // member: localization_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_mode: ";
    value_to_yaml(msg.localization_mode, out);
    out << "\n";
  }

  // member: sensor_cone_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_cone_count: ";
    value_to_yaml(msg.sensor_cone_count, out);
    out << "\n";
  }

  // member: total_cone_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_cone_count: ";
    value_to_yaml(msg.total_cone_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::SlamInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::SlamInfo>()
{
  return "turtle_interfaces::msg::SlamInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::SlamInfo>()
{
  return "turtle_interfaces/msg/SlamInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::SlamInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<turtle_interfaces::msg::SlamStatistics>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::SlamInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<turtle_interfaces::msg::SlamStatistics>::value> {};

template<>
struct is_message<turtle_interfaces::msg::SlamInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_INFO__TRAITS_HPP_

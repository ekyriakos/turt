// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/RosStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/ros_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::RosStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_names.size() == 0) {
      out << "node_names: []\n";
    } else {
      out << "node_names:\n";
      for (auto item : msg.node_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::RosStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::RosStatus>()
{
  return "turtle_interfaces::msg::RosStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::RosStatus>()
{
  return "turtle_interfaces/msg/RosStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::RosStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::RosStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::msg::RosStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ROS_STATUS__TRAITS_HPP_

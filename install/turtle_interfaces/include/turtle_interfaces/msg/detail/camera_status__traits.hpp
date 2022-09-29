// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/camera_status__struct.hpp"
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
  const turtle_interfaces::msg::CameraStatus & msg,
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

  // member: left_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_camera: ";
    value_to_yaml(msg.left_camera, out);
    out << "\n";
  }

  // member: center_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_camera: ";
    value_to_yaml(msg.center_camera, out);
    out << "\n";
  }

  // member: right_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_camera: ";
    value_to_yaml(msg.right_camera, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::CameraStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::CameraStatus>()
{
  return "turtle_interfaces::msg::CameraStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::CameraStatus>()
{
  return "turtle_interfaces/msg/CameraStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::CameraStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::CameraStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::CameraStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__TRAITS_HPP_

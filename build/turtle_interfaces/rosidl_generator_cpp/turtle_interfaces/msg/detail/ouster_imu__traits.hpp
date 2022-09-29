// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/OusterImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/ouster_imu__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::OusterImu & msg,
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

  // member: imu_monotonic_time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_monotonic_time_stamp: ";
    value_to_yaml(msg.imu_monotonic_time_stamp, out);
    out << "\n";
  }

  // member: gyro_time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_time_stamp: ";
    value_to_yaml(msg.gyro_time_stamp, out);
    out << "\n";
  }

  // member: accel_time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_time_stamp: ";
    value_to_yaml(msg.accel_time_stamp, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_yaml(msg.angular_velocity, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::OusterImu & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::OusterImu>()
{
  return "turtle_interfaces::msg::OusterImu";
}

template<>
inline const char * name<turtle_interfaces::msg::OusterImu>()
{
  return "turtle_interfaces/msg/OusterImu";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::OusterImu>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::OusterImu>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::OusterImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__TRAITS_HPP_

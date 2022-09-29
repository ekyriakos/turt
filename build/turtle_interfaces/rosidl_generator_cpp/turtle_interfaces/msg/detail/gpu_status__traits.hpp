// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/GpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/gpu_status__struct.hpp"
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
  const turtle_interfaces::msg::GpuStatus & msg,
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

  // member: gpu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpu_status: ";
    value_to_yaml(msg.gpu_status, out);
    out << "\n";
  }

  // member: cu_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cu_device: ";
    value_to_yaml(msg.cu_device, out);
    out << "\n";
  }

  // member: free_memory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_memory: ";
    value_to_yaml(msg.free_memory, out);
    out << "\n";
  }

  // member: used_memory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "used_memory: ";
    value_to_yaml(msg.used_memory, out);
    out << "\n";
  }

  // member: total_memory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_memory: ";
    value_to_yaml(msg.total_memory, out);
    out << "\n";
  }

  // member: temp_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp_c: ";
    value_to_yaml(msg.temp_c, out);
    out << "\n";
  }

  // member: speed_fan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_fan: ";
    value_to_yaml(msg.speed_fan, out);
    out << "\n";
  }

  // member: power_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_usage: ";
    value_to_yaml(msg.power_usage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::GpuStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::GpuStatus>()
{
  return "turtle_interfaces::msg::GpuStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::GpuStatus>()
{
  return "turtle_interfaces/msg/GpuStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::GpuStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::GpuStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::GpuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__TRAITS_HPP_

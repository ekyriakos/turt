// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/cpu_status__struct.hpp"
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
  const turtle_interfaces::msg::CpuStatus & msg,
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

  // member: cpu_usage_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage_percent: ";
    value_to_yaml(msg.cpu_usage_percent, out);
    out << "\n";
  }

  // member: number_of_cores
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_cores: ";
    value_to_yaml(msg.number_of_cores, out);
    out << "\n";
  }

  // member: core_usage_percents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.core_usage_percents.size() == 0) {
      out << "core_usage_percents: []\n";
    } else {
      out << "core_usage_percents:\n";
      for (auto item : msg.core_usage_percents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: number_of_ros_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_ros_nodes: ";
    value_to_yaml(msg.number_of_ros_nodes, out);
    out << "\n";
  }

  // member: node_cpu_usage_percents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_cpu_usage_percents.size() == 0) {
      out << "node_cpu_usage_percents: []\n";
    } else {
      out << "node_cpu_usage_percents:\n";
      for (auto item : msg.node_cpu_usage_percents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: node_cpu_usage_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_cpu_usage_names.size() == 0) {
      out << "node_cpu_usage_names: []\n";
    } else {
      out << "node_cpu_usage_names:\n";
      for (auto item : msg.node_cpu_usage_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: number_of_temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_temperatures: ";
    value_to_yaml(msg.number_of_temperatures, out);
    out << "\n";
  }

  // member: core_temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.core_temperatures.size() == 0) {
      out << "core_temperatures: []\n";
    } else {
      out << "core_temperatures:\n";
      for (auto item : msg.core_temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: core_temperature_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.core_temperature_names.size() == 0) {
      out << "core_temperature_names: []\n";
    } else {
      out << "core_temperature_names:\n";
      for (auto item : msg.core_temperature_names) {
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

inline std::string to_yaml(const turtle_interfaces::msg::CpuStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::CpuStatus>()
{
  return "turtle_interfaces::msg::CpuStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::CpuStatus>()
{
  return "turtle_interfaces/msg/CpuStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::CpuStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::CpuStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::msg::CpuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/can_status__struct.hpp"
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
  const turtle_interfaces::msg::CanStatus & msg,
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

  // member: message_timeouts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_timeouts: ";
    value_to_yaml(msg.message_timeouts, out);
    out << "\n";
  }

  // member: sensor_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_errors: ";
    value_to_yaml(msg.sensor_errors, out);
    out << "\n";
  }

  // member: tx_berrors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_berrors: ";
    value_to_yaml(msg.tx_berrors, out);
    out << "\n";
  }

  // member: rx_berrors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_berrors: ";
    value_to_yaml(msg.rx_berrors, out);
    out << "\n";
  }

  // member: tx_terrors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_terrors: ";
    value_to_yaml(msg.tx_terrors, out);
    out << "\n";
  }

  // member: rx_terrors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_terrors: ";
    value_to_yaml(msg.rx_terrors, out);
    out << "\n";
  }

  // member: bus_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_errors: ";
    value_to_yaml(msg.bus_errors, out);
    out << "\n";
  }

  // member: restarts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restarts: ";
    value_to_yaml(msg.restarts, out);
    out << "\n";
  }

  // member: can_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_state: ";
    value_to_yaml(msg.can_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::CanStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::CanStatus>()
{
  return "turtle_interfaces::msg::CanStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::CanStatus>()
{
  return "turtle_interfaces/msg/CanStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::CanStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::CanStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::CanStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__TRAITS_HPP_

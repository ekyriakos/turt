// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/DioStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/dio_status__struct.hpp"
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
  const turtle_interfaces::msg::DioStatus & msg,
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

  // member: do_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.do_state.size() == 0) {
      out << "do_state: []\n";
    } else {
      out << "do_state:\n";
      for (auto item : msg.do_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: di_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.di_state.size() == 0) {
      out << "di_state: []\n";
    } else {
      out << "di_state:\n";
      for (auto item : msg.di_state) {
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

inline std::string to_yaml(const turtle_interfaces::msg::DioStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::DioStatus>()
{
  return "turtle_interfaces::msg::DioStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::DioStatus>()
{
  return "turtle_interfaces/msg/DioStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::DioStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::DioStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::DioStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__TRAITS_HPP_

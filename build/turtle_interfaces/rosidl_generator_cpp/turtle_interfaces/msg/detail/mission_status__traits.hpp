// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/mission_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::MissionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_status: ";
    value_to_yaml(msg.mission_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::MissionStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::MissionStatus>()
{
  return "turtle_interfaces::msg::MissionStatus";
}

template<>
inline const char * name<turtle_interfaces::msg::MissionStatus>()
{
  return "turtle_interfaces/msg/MissionStatus";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::MissionStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::msg::MissionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__TRAITS_HPP_

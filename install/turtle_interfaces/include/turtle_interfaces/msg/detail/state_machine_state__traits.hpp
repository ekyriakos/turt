// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/state_machine_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::StateMachineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: setfinished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setfinished: ";
    value_to_yaml(msg.setfinished, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::StateMachineState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::StateMachineState>()
{
  return "turtle_interfaces::msg::StateMachineState";
}

template<>
inline const char * name<turtle_interfaces::msg::StateMachineState>()
{
  return "turtle_interfaces/msg/StateMachineState";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::StateMachineState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::StateMachineState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::msg::StateMachineState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__TRAITS_HPP_

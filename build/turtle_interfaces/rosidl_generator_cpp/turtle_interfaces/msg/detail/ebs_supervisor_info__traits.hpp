// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/EbsSupervisorInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/ebs_supervisor_info__struct.hpp"
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
  const turtle_interfaces::msg::EbsSupervisorInfo & msg,
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

  // member: asmsstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asmsstate: ";
    value_to_yaml(msg.asmsstate, out);
    out << "\n";
  }

  // member: tsmsout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tsmsout: ";
    value_to_yaml(msg.tsmsout, out);
    out << "\n";
  }

  // member: ebsstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ebsstatus: ";
    value_to_yaml(msg.ebsstatus, out);
    out << "\n";
  }

  // member: ebsled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ebsled: ";
    value_to_yaml(msg.ebsled, out);
    out << "\n";
  }

  // member: servicebrakestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servicebrakestatus: ";
    value_to_yaml(msg.servicebrakestatus, out);
    out << "\n";
  }

  // member: initialchecked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialchecked: ";
    value_to_yaml(msg.initialchecked, out);
    out << "\n";
  }

  // member: initialcheckstage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialcheckstage: ";
    value_to_yaml(msg.initialcheckstage, out);
    out << "\n";
  }

  // member: monitortankpressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monitortankpressure: ";
    value_to_yaml(msg.monitortankpressure, out);
    out << "\n";
  }

  // member: monitorbrakepressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monitorbrakepressure: ";
    value_to_yaml(msg.monitorbrakepressure, out);
    out << "\n";
  }

  // member: monitorservocheck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monitorservocheck: ";
    value_to_yaml(msg.monitorservocheck, out);
    out << "\n";
  }

  // member: monitorapu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "monitorapu: ";
    value_to_yaml(msg.monitorapu, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::EbsSupervisorInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::EbsSupervisorInfo>()
{
  return "turtle_interfaces::msg::EbsSupervisorInfo";
}

template<>
inline const char * name<turtle_interfaces::msg::EbsSupervisorInfo>()
{
  return "turtle_interfaces/msg/EbsSupervisorInfo";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::EbsSupervisorInfo>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::EbsSupervisorInfo>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtle_interfaces::msg::EbsSupervisorInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SUPERVISOR_INFO__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/slam_statistics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtle_interfaces::msg::SlamStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chi2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chi2: ";
    value_to_yaml(msg.chi2, out);
    out << "\n";
  }

  // member: num_vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_vertices: ";
    value_to_yaml(msg.num_vertices, out);
    out << "\n";
  }

  // member: num_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_edges: ";
    value_to_yaml(msg.num_edges, out);
    out << "\n";
  }

  // member: total_optimizer_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_optimizer_time: ";
    value_to_yaml(msg.total_optimizer_time, out);
    out << "\n";
  }

  // member: hessian_dim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hessian_dim: ";
    value_to_yaml(msg.hessian_dim, out);
    out << "\n";
  }

  // member: cholesky_nnz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cholesky_nnz: ";
    value_to_yaml(msg.cholesky_nnz, out);
    out << "\n";
  }

  // member: num_iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_iterations: ";
    value_to_yaml(msg.num_iterations, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtle_interfaces::msg::SlamStatistics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtle_interfaces::msg::SlamStatistics>()
{
  return "turtle_interfaces::msg::SlamStatistics";
}

template<>
inline const char * name<turtle_interfaces::msg::SlamStatistics>()
{
  return "turtle_interfaces/msg/SlamStatistics";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::SlamStatistics>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::SlamStatistics>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::msg::SlamStatistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__TRAITS_HPP_

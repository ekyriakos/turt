// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/slam_statistics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_SlamStatistics_num_iterations
{
public:
  explicit Init_SlamStatistics_num_iterations(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::SlamStatistics num_iterations(::turtle_interfaces::msg::SlamStatistics::_num_iterations_type arg)
  {
    msg_.num_iterations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_cholesky_nnz
{
public:
  explicit Init_SlamStatistics_cholesky_nnz(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  Init_SlamStatistics_num_iterations cholesky_nnz(::turtle_interfaces::msg::SlamStatistics::_cholesky_nnz_type arg)
  {
    msg_.cholesky_nnz = std::move(arg);
    return Init_SlamStatistics_num_iterations(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_hessian_dim
{
public:
  explicit Init_SlamStatistics_hessian_dim(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  Init_SlamStatistics_cholesky_nnz hessian_dim(::turtle_interfaces::msg::SlamStatistics::_hessian_dim_type arg)
  {
    msg_.hessian_dim = std::move(arg);
    return Init_SlamStatistics_cholesky_nnz(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_total_optimizer_time
{
public:
  explicit Init_SlamStatistics_total_optimizer_time(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  Init_SlamStatistics_hessian_dim total_optimizer_time(::turtle_interfaces::msg::SlamStatistics::_total_optimizer_time_type arg)
  {
    msg_.total_optimizer_time = std::move(arg);
    return Init_SlamStatistics_hessian_dim(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_num_edges
{
public:
  explicit Init_SlamStatistics_num_edges(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  Init_SlamStatistics_total_optimizer_time num_edges(::turtle_interfaces::msg::SlamStatistics::_num_edges_type arg)
  {
    msg_.num_edges = std::move(arg);
    return Init_SlamStatistics_total_optimizer_time(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_num_vertices
{
public:
  explicit Init_SlamStatistics_num_vertices(::turtle_interfaces::msg::SlamStatistics & msg)
  : msg_(msg)
  {}
  Init_SlamStatistics_num_edges num_vertices(::turtle_interfaces::msg::SlamStatistics::_num_vertices_type arg)
  {
    msg_.num_vertices = std::move(arg);
    return Init_SlamStatistics_num_edges(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

class Init_SlamStatistics_chi2
{
public:
  Init_SlamStatistics_chi2()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamStatistics_num_vertices chi2(::turtle_interfaces::msg::SlamStatistics::_chi2_type arg)
  {
    msg_.chi2 = std::move(arg);
    return Init_SlamStatistics_num_vertices(msg_);
  }

private:
  ::turtle_interfaces::msg::SlamStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::SlamStatistics>()
{
  return turtle_interfaces::msg::builder::Init_SlamStatistics_chi2();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__BUILDER_HPP_

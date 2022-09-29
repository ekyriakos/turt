// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/cpu_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_CpuStatus_core_temperature_names
{
public:
  explicit Init_CpuStatus_core_temperature_names(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::CpuStatus core_temperature_names(::turtle_interfaces::msg::CpuStatus::_core_temperature_names_type arg)
  {
    msg_.core_temperature_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_core_temperatures
{
public:
  explicit Init_CpuStatus_core_temperatures(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_core_temperature_names core_temperatures(::turtle_interfaces::msg::CpuStatus::_core_temperatures_type arg)
  {
    msg_.core_temperatures = std::move(arg);
    return Init_CpuStatus_core_temperature_names(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_number_of_temperatures
{
public:
  explicit Init_CpuStatus_number_of_temperatures(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_core_temperatures number_of_temperatures(::turtle_interfaces::msg::CpuStatus::_number_of_temperatures_type arg)
  {
    msg_.number_of_temperatures = std::move(arg);
    return Init_CpuStatus_core_temperatures(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_node_cpu_usage_names
{
public:
  explicit Init_CpuStatus_node_cpu_usage_names(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_number_of_temperatures node_cpu_usage_names(::turtle_interfaces::msg::CpuStatus::_node_cpu_usage_names_type arg)
  {
    msg_.node_cpu_usage_names = std::move(arg);
    return Init_CpuStatus_number_of_temperatures(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_node_cpu_usage_percents
{
public:
  explicit Init_CpuStatus_node_cpu_usage_percents(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_node_cpu_usage_names node_cpu_usage_percents(::turtle_interfaces::msg::CpuStatus::_node_cpu_usage_percents_type arg)
  {
    msg_.node_cpu_usage_percents = std::move(arg);
    return Init_CpuStatus_node_cpu_usage_names(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_number_of_ros_nodes
{
public:
  explicit Init_CpuStatus_number_of_ros_nodes(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_node_cpu_usage_percents number_of_ros_nodes(::turtle_interfaces::msg::CpuStatus::_number_of_ros_nodes_type arg)
  {
    msg_.number_of_ros_nodes = std::move(arg);
    return Init_CpuStatus_node_cpu_usage_percents(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_core_usage_percents
{
public:
  explicit Init_CpuStatus_core_usage_percents(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_number_of_ros_nodes core_usage_percents(::turtle_interfaces::msg::CpuStatus::_core_usage_percents_type arg)
  {
    msg_.core_usage_percents = std::move(arg);
    return Init_CpuStatus_number_of_ros_nodes(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_number_of_cores
{
public:
  explicit Init_CpuStatus_number_of_cores(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_core_usage_percents number_of_cores(::turtle_interfaces::msg::CpuStatus::_number_of_cores_type arg)
  {
    msg_.number_of_cores = std::move(arg);
    return Init_CpuStatus_core_usage_percents(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_cpu_usage_percent
{
public:
  explicit Init_CpuStatus_cpu_usage_percent(::turtle_interfaces::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_number_of_cores cpu_usage_percent(::turtle_interfaces::msg::CpuStatus::_cpu_usage_percent_type arg)
  {
    msg_.cpu_usage_percent = std::move(arg);
    return Init_CpuStatus_number_of_cores(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

class Init_CpuStatus_header
{
public:
  Init_CpuStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuStatus_cpu_usage_percent header(::turtle_interfaces::msg::CpuStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CpuStatus_cpu_usage_percent(msg_);
  }

private:
  ::turtle_interfaces::msg::CpuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::CpuStatus>()
{
  return turtle_interfaces::msg::builder::Init_CpuStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_

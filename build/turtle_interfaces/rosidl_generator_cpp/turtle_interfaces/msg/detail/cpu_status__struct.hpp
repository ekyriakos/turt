// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__CpuStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__CpuStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CpuStatus_
{
  using Type = CpuStatus_<ContainerAllocator>;

  explicit CpuStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage_percent = 0.0f;
      this->number_of_cores = 0;
      this->number_of_ros_nodes = 0ul;
      this->number_of_temperatures = 0;
    }
  }

  explicit CpuStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage_percent = 0.0f;
      this->number_of_cores = 0;
      this->number_of_ros_nodes = 0ul;
      this->number_of_temperatures = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cpu_usage_percent_type =
    float;
  _cpu_usage_percent_type cpu_usage_percent;
  using _number_of_cores_type =
    uint16_t;
  _number_of_cores_type number_of_cores;
  using _core_usage_percents_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _core_usage_percents_type core_usage_percents;
  using _number_of_ros_nodes_type =
    uint32_t;
  _number_of_ros_nodes_type number_of_ros_nodes;
  using _node_cpu_usage_percents_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _node_cpu_usage_percents_type node_cpu_usage_percents;
  using _node_cpu_usage_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _node_cpu_usage_names_type node_cpu_usage_names;
  using _number_of_temperatures_type =
    uint16_t;
  _number_of_temperatures_type number_of_temperatures;
  using _core_temperatures_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _core_temperatures_type core_temperatures;
  using _core_temperature_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _core_temperature_names_type core_temperature_names;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cpu_usage_percent(
    const float & _arg)
  {
    this->cpu_usage_percent = _arg;
    return *this;
  }
  Type & set__number_of_cores(
    const uint16_t & _arg)
  {
    this->number_of_cores = _arg;
    return *this;
  }
  Type & set__core_usage_percents(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->core_usage_percents = _arg;
    return *this;
  }
  Type & set__number_of_ros_nodes(
    const uint32_t & _arg)
  {
    this->number_of_ros_nodes = _arg;
    return *this;
  }
  Type & set__node_cpu_usage_percents(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->node_cpu_usage_percents = _arg;
    return *this;
  }
  Type & set__node_cpu_usage_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->node_cpu_usage_names = _arg;
    return *this;
  }
  Type & set__number_of_temperatures(
    const uint16_t & _arg)
  {
    this->number_of_temperatures = _arg;
    return *this;
  }
  Type & set__core_temperatures(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->core_temperatures = _arg;
    return *this;
  }
  Type & set__core_temperature_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->core_temperature_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::CpuStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::CpuStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CpuStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CpuStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__CpuStatus
    std::shared_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__CpuStatus
    std::shared_ptr<turtle_interfaces::msg::CpuStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CpuStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cpu_usage_percent != other.cpu_usage_percent) {
      return false;
    }
    if (this->number_of_cores != other.number_of_cores) {
      return false;
    }
    if (this->core_usage_percents != other.core_usage_percents) {
      return false;
    }
    if (this->number_of_ros_nodes != other.number_of_ros_nodes) {
      return false;
    }
    if (this->node_cpu_usage_percents != other.node_cpu_usage_percents) {
      return false;
    }
    if (this->node_cpu_usage_names != other.node_cpu_usage_names) {
      return false;
    }
    if (this->number_of_temperatures != other.number_of_temperatures) {
      return false;
    }
    if (this->core_temperatures != other.core_temperatures) {
      return false;
    }
    if (this->core_temperature_names != other.core_temperature_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const CpuStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CpuStatus_

// alias to use template instance with default allocator
using CpuStatus =
  turtle_interfaces::msg::CpuStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CPU_STATUS__STRUCT_HPP_

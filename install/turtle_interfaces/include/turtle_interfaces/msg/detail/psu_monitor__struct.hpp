// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/PsuMonitor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__PsuMonitor __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__PsuMonitor __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PsuMonitor_
{
  using Type = PsuMonitor_<ContainerAllocator>;

  explicit PsuMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_in = 0.0f;
      this->v_ignition = 0.0f;
      this->v3_3 = 0.0f;
      this->v5_0 = 0.0f;
      this->v12_0 = 0.0f;
      this->temperature = 0.0f;
    }
  }

  explicit PsuMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_in = 0.0f;
      this->v_ignition = 0.0f;
      this->v3_3 = 0.0f;
      this->v5_0 = 0.0f;
      this->v12_0 = 0.0f;
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _v_in_type =
    float;
  _v_in_type v_in;
  using _v_ignition_type =
    float;
  _v_ignition_type v_ignition;
  using _v3_3_type =
    float;
  _v3_3_type v3_3;
  using _v5_0_type =
    float;
  _v5_0_type v5_0;
  using _v12_0_type =
    float;
  _v12_0_type v12_0;
  using _temperature_type =
    float;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__v_in(
    const float & _arg)
  {
    this->v_in = _arg;
    return *this;
  }
  Type & set__v_ignition(
    const float & _arg)
  {
    this->v_ignition = _arg;
    return *this;
  }
  Type & set__v3_3(
    const float & _arg)
  {
    this->v3_3 = _arg;
    return *this;
  }
  Type & set__v5_0(
    const float & _arg)
  {
    this->v5_0 = _arg;
    return *this;
  }
  Type & set__v12_0(
    const float & _arg)
  {
    this->v12_0 = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__PsuMonitor
    std::shared_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__PsuMonitor
    std::shared_ptr<turtle_interfaces::msg::PsuMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PsuMonitor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->v_in != other.v_in) {
      return false;
    }
    if (this->v_ignition != other.v_ignition) {
      return false;
    }
    if (this->v3_3 != other.v3_3) {
      return false;
    }
    if (this->v5_0 != other.v5_0) {
      return false;
    }
    if (this->v12_0 != other.v12_0) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const PsuMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PsuMonitor_

// alias to use template instance with default allocator
using PsuMonitor =
  turtle_interfaces::msg::PsuMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__PSU_MONITOR__STRUCT_HPP_

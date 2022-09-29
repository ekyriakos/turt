// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/GpuStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__GpuStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__GpuStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpuStatus_
{
  using Type = GpuStatus_<ContainerAllocator>;

  explicit GpuStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpu_status = false;
      this->cu_device = 0;
      this->free_memory = 0.0f;
      this->used_memory = 0.0f;
      this->total_memory = 0.0f;
      this->temp_c = 0.0f;
      this->speed_fan = 0.0f;
      this->power_usage = 0.0f;
    }
  }

  explicit GpuStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gpu_status = false;
      this->cu_device = 0;
      this->free_memory = 0.0f;
      this->used_memory = 0.0f;
      this->total_memory = 0.0f;
      this->temp_c = 0.0f;
      this->speed_fan = 0.0f;
      this->power_usage = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gpu_status_type =
    bool;
  _gpu_status_type gpu_status;
  using _cu_device_type =
    int16_t;
  _cu_device_type cu_device;
  using _free_memory_type =
    float;
  _free_memory_type free_memory;
  using _used_memory_type =
    float;
  _used_memory_type used_memory;
  using _total_memory_type =
    float;
  _total_memory_type total_memory;
  using _temp_c_type =
    float;
  _temp_c_type temp_c;
  using _speed_fan_type =
    float;
  _speed_fan_type speed_fan;
  using _power_usage_type =
    float;
  _power_usage_type power_usage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gpu_status(
    const bool & _arg)
  {
    this->gpu_status = _arg;
    return *this;
  }
  Type & set__cu_device(
    const int16_t & _arg)
  {
    this->cu_device = _arg;
    return *this;
  }
  Type & set__free_memory(
    const float & _arg)
  {
    this->free_memory = _arg;
    return *this;
  }
  Type & set__used_memory(
    const float & _arg)
  {
    this->used_memory = _arg;
    return *this;
  }
  Type & set__total_memory(
    const float & _arg)
  {
    this->total_memory = _arg;
    return *this;
  }
  Type & set__temp_c(
    const float & _arg)
  {
    this->temp_c = _arg;
    return *this;
  }
  Type & set__speed_fan(
    const float & _arg)
  {
    this->speed_fan = _arg;
    return *this;
  }
  Type & set__power_usage(
    const float & _arg)
  {
    this->power_usage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::GpuStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::GpuStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::GpuStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::GpuStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__GpuStatus
    std::shared_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__GpuStatus
    std::shared_ptr<turtle_interfaces::msg::GpuStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpuStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gpu_status != other.gpu_status) {
      return false;
    }
    if (this->cu_device != other.cu_device) {
      return false;
    }
    if (this->free_memory != other.free_memory) {
      return false;
    }
    if (this->used_memory != other.used_memory) {
      return false;
    }
    if (this->total_memory != other.total_memory) {
      return false;
    }
    if (this->temp_c != other.temp_c) {
      return false;
    }
    if (this->speed_fan != other.speed_fan) {
      return false;
    }
    if (this->power_usage != other.power_usage) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpuStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpuStatus_

// alias to use template instance with default allocator
using GpuStatus =
  turtle_interfaces::msg::GpuStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__GPU_STATUS__STRUCT_HPP_

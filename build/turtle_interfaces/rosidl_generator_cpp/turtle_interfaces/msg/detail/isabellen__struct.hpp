// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/Isabellen.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__Isabellen __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__Isabellen __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Isabellen_
{
  using Type = Isabellen_<ContainerAllocator>;

  explicit Isabellen_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idc = 0.0f;
      this->vdc = 0.0f;
      this->pdc = 0.0f;
      this->energy = 0.0f;
    }
  }

  explicit Isabellen_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idc = 0.0f;
      this->vdc = 0.0f;
      this->pdc = 0.0f;
      this->energy = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _idc_type =
    float;
  _idc_type idc;
  using _vdc_type =
    float;
  _vdc_type vdc;
  using _pdc_type =
    float;
  _pdc_type pdc;
  using _energy_type =
    float;
  _energy_type energy;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__idc(
    const float & _arg)
  {
    this->idc = _arg;
    return *this;
  }
  Type & set__vdc(
    const float & _arg)
  {
    this->vdc = _arg;
    return *this;
  }
  Type & set__pdc(
    const float & _arg)
  {
    this->pdc = _arg;
    return *this;
  }
  Type & set__energy(
    const float & _arg)
  {
    this->energy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::Isabellen_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::Isabellen_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Isabellen_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Isabellen_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__Isabellen
    std::shared_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__Isabellen
    std::shared_ptr<turtle_interfaces::msg::Isabellen_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Isabellen_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->idc != other.idc) {
      return false;
    }
    if (this->vdc != other.vdc) {
      return false;
    }
    if (this->pdc != other.pdc) {
      return false;
    }
    if (this->energy != other.energy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Isabellen_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Isabellen_

// alias to use template instance with default allocator
using Isabellen =
  turtle_interfaces::msg::Isabellen_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__STRUCT_HPP_

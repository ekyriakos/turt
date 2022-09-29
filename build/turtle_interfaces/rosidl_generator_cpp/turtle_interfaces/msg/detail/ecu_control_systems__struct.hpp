// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/ECUControlSystems.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__ECUControlSystems __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__ECUControlSystems __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ECUControlSystems_
{
  using Type = ECUControlSystems_<ContainerAllocator>;

  explicit ECUControlSystems_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ed_active = false;
      this->tc_active = false;
      this->pl_active = false;
      this->regen_active = false;
    }
  }

  explicit ECUControlSystems_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ed_active = false;
      this->tc_active = false;
      this->pl_active = false;
      this->regen_active = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ed_active_type =
    bool;
  _ed_active_type ed_active;
  using _tc_active_type =
    bool;
  _tc_active_type tc_active;
  using _pl_active_type =
    bool;
  _pl_active_type pl_active;
  using _regen_active_type =
    bool;
  _regen_active_type regen_active;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ed_active(
    const bool & _arg)
  {
    this->ed_active = _arg;
    return *this;
  }
  Type & set__tc_active(
    const bool & _arg)
  {
    this->tc_active = _arg;
    return *this;
  }
  Type & set__pl_active(
    const bool & _arg)
  {
    this->pl_active = _arg;
    return *this;
  }
  Type & set__regen_active(
    const bool & _arg)
  {
    this->regen_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__ECUControlSystems
    std::shared_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__ECUControlSystems
    std::shared_ptr<turtle_interfaces::msg::ECUControlSystems_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ECUControlSystems_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ed_active != other.ed_active) {
      return false;
    }
    if (this->tc_active != other.tc_active) {
      return false;
    }
    if (this->pl_active != other.pl_active) {
      return false;
    }
    if (this->regen_active != other.regen_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const ECUControlSystems_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ECUControlSystems_

// alias to use template instance with default allocator
using ECUControlSystems =
  turtle_interfaces::msg::ECUControlSystems_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_CONTROL_SYSTEMS__STRUCT_HPP_

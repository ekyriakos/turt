// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/OusterImu.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_HPP_

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
// Member 'acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__OusterImu __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__OusterImu __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OusterImu_
{
  using Type = OusterImu_<ContainerAllocator>;

  explicit OusterImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    acceleration(_init),
    angular_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_monotonic_time_stamp = 0ull;
      this->gyro_time_stamp = 0ull;
      this->accel_time_stamp = 0ull;
    }
  }

  explicit OusterImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    acceleration(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_monotonic_time_stamp = 0ull;
      this->gyro_time_stamp = 0ull;
      this->accel_time_stamp = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imu_monotonic_time_stamp_type =
    uint64_t;
  _imu_monotonic_time_stamp_type imu_monotonic_time_stamp;
  using _gyro_time_stamp_type =
    uint64_t;
  _gyro_time_stamp_type gyro_time_stamp;
  using _accel_time_stamp_type =
    uint64_t;
  _accel_time_stamp_type accel_time_stamp;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imu_monotonic_time_stamp(
    const uint64_t & _arg)
  {
    this->imu_monotonic_time_stamp = _arg;
    return *this;
  }
  Type & set__gyro_time_stamp(
    const uint64_t & _arg)
  {
    this->gyro_time_stamp = _arg;
    return *this;
  }
  Type & set__accel_time_stamp(
    const uint64_t & _arg)
  {
    this->accel_time_stamp = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::OusterImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::OusterImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::OusterImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::OusterImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__OusterImu
    std::shared_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__OusterImu
    std::shared_ptr<turtle_interfaces::msg::OusterImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OusterImu_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imu_monotonic_time_stamp != other.imu_monotonic_time_stamp) {
      return false;
    }
    if (this->gyro_time_stamp != other.gyro_time_stamp) {
      return false;
    }
    if (this->accel_time_stamp != other.accel_time_stamp) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const OusterImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OusterImu_

// alias to use template instance with default allocator
using OusterImu =
  turtle_interfaces::msg::OusterImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__OUSTER_IMU__STRUCT_HPP_

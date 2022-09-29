// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/SlamStatistics.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__SlamStatistics __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__SlamStatistics __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SlamStatistics_
{
  using Type = SlamStatistics_<ContainerAllocator>;

  explicit SlamStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chi2 = 0.0;
      this->num_vertices = 0ul;
      this->num_edges = 0ul;
      this->total_optimizer_time = 0.0;
      this->hessian_dim = 0ul;
      this->cholesky_nnz = 0ul;
      this->num_iterations = 0ul;
    }
  }

  explicit SlamStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chi2 = 0.0;
      this->num_vertices = 0ul;
      this->num_edges = 0ul;
      this->total_optimizer_time = 0.0;
      this->hessian_dim = 0ul;
      this->cholesky_nnz = 0ul;
      this->num_iterations = 0ul;
    }
  }

  // field types and members
  using _chi2_type =
    double;
  _chi2_type chi2;
  using _num_vertices_type =
    uint32_t;
  _num_vertices_type num_vertices;
  using _num_edges_type =
    uint32_t;
  _num_edges_type num_edges;
  using _total_optimizer_time_type =
    double;
  _total_optimizer_time_type total_optimizer_time;
  using _hessian_dim_type =
    uint32_t;
  _hessian_dim_type hessian_dim;
  using _cholesky_nnz_type =
    uint32_t;
  _cholesky_nnz_type cholesky_nnz;
  using _num_iterations_type =
    uint32_t;
  _num_iterations_type num_iterations;

  // setters for named parameter idiom
  Type & set__chi2(
    const double & _arg)
  {
    this->chi2 = _arg;
    return *this;
  }
  Type & set__num_vertices(
    const uint32_t & _arg)
  {
    this->num_vertices = _arg;
    return *this;
  }
  Type & set__num_edges(
    const uint32_t & _arg)
  {
    this->num_edges = _arg;
    return *this;
  }
  Type & set__total_optimizer_time(
    const double & _arg)
  {
    this->total_optimizer_time = _arg;
    return *this;
  }
  Type & set__hessian_dim(
    const uint32_t & _arg)
  {
    this->hessian_dim = _arg;
    return *this;
  }
  Type & set__cholesky_nnz(
    const uint32_t & _arg)
  {
    this->cholesky_nnz = _arg;
    return *this;
  }
  Type & set__num_iterations(
    const uint32_t & _arg)
  {
    this->num_iterations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__SlamStatistics
    std::shared_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__SlamStatistics
    std::shared_ptr<turtle_interfaces::msg::SlamStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SlamStatistics_ & other) const
  {
    if (this->chi2 != other.chi2) {
      return false;
    }
    if (this->num_vertices != other.num_vertices) {
      return false;
    }
    if (this->num_edges != other.num_edges) {
      return false;
    }
    if (this->total_optimizer_time != other.total_optimizer_time) {
      return false;
    }
    if (this->hessian_dim != other.hessian_dim) {
      return false;
    }
    if (this->cholesky_nnz != other.cholesky_nnz) {
      return false;
    }
    if (this->num_iterations != other.num_iterations) {
      return false;
    }
    return true;
  }
  bool operator!=(const SlamStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SlamStatistics_

// alias to use template instance with default allocator
using SlamStatistics =
  turtle_interfaces::msg::SlamStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__SLAM_STATISTICS__STRUCT_HPP_

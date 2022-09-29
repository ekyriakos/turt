
#ifndef ODOMETRY_HPP
#define ODOMETRY_HPP

#include "pose.hpp"
#include "twist.hpp"

#include <rclcpp/rclcpp.hpp>

#include <Eigen/Dense>

namespace fsmath {

// datatype to be used for SLAM internally to express full 2D odometry measurement (pose, twist, ts)
class Odometry {
    private:
    Pose pose_;
    Eigen::Matrix3d pose_cov_;
    Twist twist_;
    Eigen::Matrix3d twist_cov_;
    rclcpp::Time ts_;
    // used by SLAM to point to corresponding vertex ID. ID=-1 means it does not correspond to any edges
    int id_;

    public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    Odometry() {}
    Odometry(const Pose& pose, const Eigen::Matrix3d& pose_cov, const Twist& twist, 
                const Eigen::Matrix3d& twist_cov, const rclcpp::Time& ts)
            :pose_(pose), pose_cov_(pose_cov), twist_(twist), twist_cov_(twist_cov), ts_(ts), id_(-1) {}
    inline const Pose& pose() const { return pose_; }
    inline const Eigen::Matrix3d& pose_cov() const { return pose_cov_; }
    inline const Twist& twist() const { return twist_; }
    inline const Eigen::Matrix3d& twist_cov() const { return twist_cov_; }
    inline const rclcpp::Time& ts() const { return ts_; }
    inline int id() const { return id_; }
    void setId(int id) { id_ = id; }
};
} // ns

#endif


#ifndef FSMATH_CONVERSIONS_HPP
#define FSMATH_CONVERSIONS_HPP

#include "fsmath.h"
#include "twist.hpp"
#include "odometry.hpp"

#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/msg/point_field.hpp>
#include <geometry_msgs/msg/transform.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <nav_msgs/msg/odometry.hpp>

#include <Eigen/Core>

#include <cmath>
#include <stdexcept>

namespace fsmath_conversions {

inline void printCloudFields(const sensor_msgs::msg::PointCloud2& pc2) {
    for (sensor_msgs::msg::PointField field : pc2.fields) {
        std::cout << "name: " << field.name << std::endl;
        std::cout << "offset: " << field.offset << std::endl;
        std::cout << "datatype: " << field.datatype << std::endl;
        std::cout << "cout: " << field.count << std::endl;
    }
}

inline int field_index(const sensor_msgs::msg::PointCloud2& pc2, std::string field_name) {
    for (int i = 0; i < pc2.fields.size(); i++) {
        if (field_name.compare(pc2.fields[i].name) == 0)
            return i;
    }
    return -1;
}

// assumes ['x', 'y', 'z', 'rgb'] field structure (all float)
inline void fromPointCloud2toConesXY(const sensor_msgs::msg::PointCloud2& pc2, std::vector<fsmath::Cone>& cones) {
    int point_step = pc2.point_step;
    int npoints = pc2.width;
    cones.clear();
    unsigned char* it = const_cast<unsigned char*>(&pc2.data[0]); // removes const
    for (int i = 0; i < npoints; i++) {
        float x_float;
        void* x_ptr = it + pc2.fields[0].offset;
        memcpy(&x_float, x_ptr, sizeof(float));
        double x = x_float;

        float y_float;
        void* y_ptr = it + pc2.fields[1].offset;
        memcpy(&y_float, y_ptr, sizeof(float));
        double y = y_float;

        fsmath::ConeColor coneColor;
        float color_float;
        void* color_ptr = it + pc2.fields[3].offset;
        memcpy(&color_float, color_ptr, sizeof(float));
        coneColor.fromFloat(color_float);

        Eigen::Vector2d pos;
        pos << x, y;
        fsmath::Cone cone(pos, coneColor);

        cones.emplace_back(cone);

        it += point_step;
    }
}

// assumes ['r', 'b', 'rgb'] field structure (all float)
inline void fromPointCloud2RBtoConesXY(const sensor_msgs::msg::PointCloud2& pc2, std::vector<fsmath::Cone>& cones) {
    int point_step = pc2.point_step;
    int npoints = pc2.width;
    cones.clear();
    unsigned char* it = const_cast<unsigned char*>(&pc2.data[0]); // removes const
    for (int i = 0; i < npoints; i++) {
        float r_float;
        void* r_ptr = it + pc2.fields[0].offset;
        memcpy(&r_float, r_ptr, sizeof(float));
        double r = r_float;

        float b_float;
        void* b_ptr = it + pc2.fields[1].offset;
        memcpy(&b_float, b_ptr, sizeof(float));
        double b = b_float;

        fsmath::ConeColor coneColor;
        float color_float;
        void* color_ptr = it + pc2.fields[2].offset;
        memcpy(&color_float, color_ptr, sizeof(float));
        coneColor.fromFloat(color_float);

        Eigen::Vector2d pos;
        pos << r*std::cos(b), r*std::sin(b);
        fsmath::Cone cone(pos, coneColor);

        cones.emplace_back(cone);

        it += point_step;
    }
}


// creates ['r', 'b'] field structure (all float)
inline void fromPointCloud2toConesRB(const sensor_msgs::msg::PointCloud2& pc2, std::vector<fsmath::Cone>& cones) {
    printCloudFields(pc2);
    int point_step = pc2.point_step;
    int npoints = pc2.width;
    cones.clear();
    unsigned char* it = const_cast<unsigned char*>(&pc2.data[0]); // removes const
    for (int i = 0; i < npoints; i++) {
        float r_float;
        void* r_ptr = it + pc2.fields[0].offset;
        memcpy(&r_float, r_ptr, sizeof(float));
        double r = r_float;

        float b_float;
        void* b_ptr = it + pc2.fields[1].offset;
        memcpy(&b_float, b_ptr, sizeof(float));
        double b = b_float;

        Eigen::Vector2d pos;
        pos << r, b;
        fsmath::ConeColor coneColor;
        fsmath::Cone cone(pos, coneColor);

        cones.emplace_back(cone);

        it += point_step;
    }
}

inline auto fromVectorOfVectorsToCones(const std::vector<std::vector<double>>& points) {
    std::vector<fsmath::Cone> cones;
    for (auto &&point : points)
    {
        fsmath::Cone cone(point.at(0), point.at(1));
        cone.color().fromFloat(COLOR_FLOAT_ORANGE_BIG);
        cones.push_back(cone);
    }
    return cones;
}

inline void fromConesXYtoPointCloud2(const std::vector<fsmath::Cone>& cones, sensor_msgs::msg::PointCloud2& pc2) {
    pc2.fields.clear();
    sensor_msgs::msg::PointField x_field;
    x_field.name = "x";
    x_field.offset = 0;
    x_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    x_field.count = 1;
    pc2.fields.emplace_back(x_field);
    sensor_msgs::msg::PointField y_field;
    y_field.name = "y";
    y_field.offset = 4;
    y_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    y_field.count = 1;
    pc2.fields.emplace_back(y_field);
    sensor_msgs::msg::PointField z_field;
    z_field.name = "z";
    z_field.offset = 8;
    z_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    z_field.count = 1;
    pc2.fields.emplace_back(z_field);
    sensor_msgs::msg::PointField color_field;
    color_field.name = "rgb";
    color_field.offset = 12;
    color_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    color_field.count = 1;
    pc2.fields.emplace_back(color_field);

    pc2.height = 1;
    pc2.width = cones.size();
    pc2.point_step = 16;
    pc2.row_step = pc2.point_step * pc2.width;
    pc2.data.clear();
    pc2.data.reserve(pc2.row_step);

    for (fsmath::Cone cone : cones) {
        float x_float = cone[0];
        unsigned char* x_data = reinterpret_cast<unsigned char*>(&x_float);
        pc2.data.insert(pc2.data.end(), x_data, x_data + sizeof(float));
        float y_float = cone[1];
        unsigned char* y_data = reinterpret_cast<unsigned char*>(&y_float);
        pc2.data.insert(pc2.data.end(), y_data, y_data + sizeof(float));
        float z_float = 0.0;
        unsigned char* z_data = reinterpret_cast<unsigned char*>(&z_float);
        pc2.data.insert(pc2.data.end(), z_data, z_data + sizeof(float));

        float color_float = cone.color().toFloat();
        unsigned char* color_data = reinterpret_cast<unsigned char*>(&color_float);
        pc2.data.insert(pc2.data.end(), color_data, color_data + sizeof(float));
    }
}

inline void fromConesXYtoPointCloud2RB(const std::vector<fsmath::Cone>& cones, sensor_msgs::msg::PointCloud2& pc2) {
    pc2.fields.clear();
    sensor_msgs::msg::PointField x_field;
    x_field.name = "r";
    x_field.offset = 0;
    x_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    x_field.count = 1;
    pc2.fields.emplace_back(x_field);
    sensor_msgs::msg::PointField y_field;
    y_field.name = "b";
    y_field.offset = 4;
    y_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    y_field.count = 1;
    pc2.fields.emplace_back(y_field);
    sensor_msgs::msg::PointField color_field;
    color_field.name = "color";
    color_field.offset = 8;
    color_field.datatype = sensor_msgs::msg::PointField::FLOAT32;
    color_field.count = 1;
    pc2.fields.emplace_back(color_field);

    pc2.height = 1;
    pc2.width = cones.size();
    pc2.point_step = 12;
    pc2.row_step = pc2.point_step * pc2.width;
    pc2.data.clear();
    pc2.data.reserve(pc2.row_step);

    for (fsmath::Cone cone : cones) {
        float r_float = std::hypot(cone[0], cone[1]);
        unsigned char* r_data = reinterpret_cast<unsigned char*>(&r_float);
        pc2.data.insert(pc2.data.end(), r_data, r_data + sizeof(float));
        float b_float = std::atan2(cone[1], cone[0]);
        unsigned char* b_data = reinterpret_cast<unsigned char*>(&b_float);
        pc2.data.insert(pc2.data.end(), b_data, b_data + sizeof(float));

        float color_float = cone.color().toFloat();
        unsigned char* color_data = reinterpret_cast<unsigned char*>(&color_float);
        pc2.data.insert(pc2.data.end(), color_data, color_data + sizeof(float));
    }
}

inline void fromMsgToPose(const geometry_msgs::msg::Pose& pose_msg, fsmath::Pose& pose) {
    geometry_msgs::msg::Quaternion q = pose_msg.orientation;
    double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
    double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
    double eulerAngleZ = std::atan2(siny_cosp, cosy_cosp);
    
    pose = fsmath::Pose(pose_msg.position.x, pose_msg.position.y, eulerAngleZ);
}

inline void fromMsgToTwist(const geometry_msgs::msg::Twist& twist_msg, fsmath::Twist& twist) {
    twist = fsmath::Twist(twist_msg.linear.x, twist_msg.linear.y, twist_msg.angular.z);
}

inline void fromPoseToTransform(const fsmath::Pose& pose, geometry_msgs::msg::Transform& tf) {
    tf.translation.x = pose[0];
    tf.translation.y = pose[1];
    tf.translation.z = 0;

    double cy = std::cos(0.5 * pose.rotation().angle());
    double sy = std::sin(0.5 * pose.rotation().angle());
    tf.rotation.w = cy;
    tf.rotation.x = 0;
    tf.rotation.y = 0;
    tf.rotation.z = sy;
}

inline void fromTransformToPose(const geometry_msgs::msg::Transform& tf, fsmath::Pose& pose) {
    geometry_msgs::msg::Quaternion q = tf.rotation;
    double siny_cosp = 2 * (q.w * q.z + q.x * q.y);
    double cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
    double eulerAngleZ = std::atan2(siny_cosp, cosy_cosp);

    pose = fsmath::Pose(tf.translation.x, tf.translation.y, eulerAngleZ);
}

template<typename T, std::size_t N>
inline void fromArrayToEigen(const std::array<T, N>& arr, Eigen::Ref<Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>> mat) {
    int mat_dim = std::sqrt(N);

    for (int i = 0; i < mat_dim; i++) {
        for (int j = 0; j < mat_dim; j++) {
            mat(i, j) = arr[i*mat_dim + j];
        }
    }
    
} 

template<typename T>
inline void from2dTo3dcov(const Eigen::Matrix<T, 6, 6>& cov3d, Eigen::Ref<Eigen::Matrix<T, 3, 3>> cov2d) {
    cov2d.topLeftCorner(2,2) = cov3d.topLeftCorner(2,2);
    cov2d(0,2) = cov3d(0,5);
    cov2d(1,2) = cov3d(1,5);
    cov2d(2,2) = cov3d(5,5);
    cov2d(2,0) = cov3d(5,0);
    cov2d(2,1) = cov3d(5,1);
}

inline void fromMsgToOdometry(const nav_msgs::msg::Odometry odom_msg, fsmath::Odometry& odom) {
    Eigen::Matrix<double, 6, 6> tmp_cov3d;
    rclcpp::Time ts = odom_msg.header.stamp;

    fsmath::Pose pose;
    fromMsgToPose(odom_msg.pose.pose, pose);

    Eigen::Matrix3d pose_cov;
    fromArrayToEigen<double, 36>(odom_msg.pose.covariance, tmp_cov3d);
    from2dTo3dcov<double>(tmp_cov3d, pose_cov);

    fsmath::Twist twist;
    fromMsgToTwist(odom_msg.twist.twist, twist);

    Eigen::Matrix3d twist_cov;
    fromArrayToEigen<double, 36>(odom_msg.twist.covariance, tmp_cov3d);
    from2dTo3dcov<double>(tmp_cov3d, twist_cov);
    
    odom = fsmath::Odometry(pose, pose_cov, twist, twist_cov, ts);
}

template<typename T, std::size_t N>
inline void fromEigenToArray(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>& mat, std::array<T, N>& arr) {
    int mat_dim = std::sqrt(N);

    for (int i = 0; i < mat_dim; i++) {
        for (int j = 0; j < mat_dim; j++) {
            arr[i*mat_dim+j] = mat(i, j);
        }
    }
} 

// Function that converts an eigen Vector to a std::vector
template<typename T>
inline void fromEigenToVector(const Eigen::Matrix<T, Eigen::Dynamic, 1>& eigenVec, std::vector<T>& vec) {
    vec.resize(eigenVec.size());
    Eigen::Matrix<T, Eigen::Dynamic, 1>::Map(&vec[0], eigenVec.size()) = eigenVec;
} 

// Overloading of the previous functions in case of RowVector input
template<typename T>
inline void fromEigenToVector(const Eigen::Matrix<T, 1, Eigen::Dynamic>& eigenVec, std::vector<T>& vec) {
    vec.resize(eigenVec.size());
    Eigen::Matrix<T, 1, Eigen::Dynamic>::Map(&vec[0], eigenVec.size()) = eigenVec;
} 

// Overloading of the previous functions in case of matrix input
template<typename T>
inline void fromEigenToVector(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>& eigenMat, std::vector<T>& vec, bool colMajor = true) {
    vec.resize(eigenMat.size());
    if(colMajor)
        Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>::Map(&vec[0], eigenMat.rows(), eigenMat.cols()) = eigenMat;
    else
        Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>::Map(&vec[0], eigenMat.rows(), eigenMat.cols()) = eigenMat;
} 

// Overloading of the previous function in case of RowMajor matrix input
template<typename T>
inline void fromEigenToVector(const Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>& eigenMat, std::vector<T>& vec, bool colMajor = true) {
    vec.resize(eigenMat.size());
    if(colMajor)
        Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic>::Map(&vec[0], eigenMat.rows(), eigenMat.cols()) = eigenMat;
    else
        Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>::Map(&vec[0], eigenMat.rows(), eigenMat.cols()) = eigenMat;
} 

// Function that converts a std::vector to an eigen Vector
template<typename T>
inline void fromVectorToEigen(const std::vector<T>& vec, Eigen::Matrix<T, Eigen::Dynamic, 1>& eigenVec) {
    eigenVec.resize(vec.size());
    eigenVec = Eigen::Matrix<T, Eigen::Dynamic, 1>::Map(vec.data(), vec.size());
}

// Overloading of the previous functions in case of RowVector input
template<typename T>
inline void fromVectorToEigen(const std::vector<T>& vec, Eigen::Matrix<T, 1, Eigen::Dynamic>& eigenVec) {
    eigenVec.resize(vec.size());
    eigenVec = Eigen::Matrix<T, Eigen::Dynamic, 1>::Map(vec.data(), vec.size());
}

inline void fromQuanternionToYaw(double x, double y, double z, double w, double &yaw) {
    double siny_cosp = 2 * (w * z + x * y);
    double cosy_cosp = 1 - 2 * (y * y + z * z);
    yaw = std::atan2(siny_cosp, cosy_cosp);
}

} // ns
#endif

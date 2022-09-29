#ifndef FSMATH_FSMATH_HPP
#define FSMATH_FSMATH_HPP

#include <yaml-cpp/yaml.h>

#include <Eigen/Dense>
#include <cassert>
#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

#include "ament_index_cpp/get_package_share_directory.hpp"
#include "cone.hpp"
#include "pose.hpp"
#include "track.hpp"

namespace fsmath {

inline double squaredMahalanobisDistance(Eigen::VectorXd vector1, Eigen::VectorXd meanOfDistribution,
                                         Eigen::MatrixXd informationMatrix) {
    return (vector1 - meanOfDistribution).transpose() * informationMatrix * (vector1 - meanOfDistribution);
}

inline double bhattacharyyaDistance(Eigen::VectorXd mean1, Eigen::MatrixXd covariance1, Eigen::VectorXd mean2,
                                    Eigen::MatrixXd covariance2) {
    Eigen::MatrixXd Sigma = (covariance1 + covariance2) / 2;
    double firstTerm = 1 / 8 * (mean1 - mean2).transpose() * Sigma.inverse() * (mean1 - mean2);

    double denominator = std::sqrt(covariance1.determinant() * covariance2.determinant());
    double secondTerm = 1 / 2 * std::log(Sigma.determinant() / denominator);

    return firstTerm + secondTerm;
}

/**
 * Converts point in cartesian coordinates to polar.
 */
inline Eigen::Vector2d XYtoRB(const Eigen::Vector2d& xy) {
    Eigen::Vector2d rb;
    rb[0] = std::hypot(xy[0], xy[1]);
    rb[1] = std::atan2(xy[1], xy[0]);
    return rb;
}

/**
 * Converts point in polar coordinates to cartesian.
 */
inline Eigen::Vector2d RBtoXY(const Eigen::Vector2d& rb) {
    Eigen::Vector2d xy;
    xy[0] = rb[0] * std::cos(rb[1]);
    xy[1] = rb[0] * std::sin(rb[1]);
    return xy;
}

/**
 * Computes the jacobian of the transformation of a point expressed
 * in cartesian coordinates to polar.
 * @param x: The point at which to compute the jacobian expressed
 * in cartesian coordinates
 */
inline Eigen::Matrix2d jacXYtoRB(const Eigen::Vector2d& x) {
    Eigen::Matrix2d jac;
    double hyp = std::hypot(x[0], x[1]);
    double hyp2 = hyp * hyp;
    jac << x[0] / hyp, x[1] / hyp, -x[1] / hyp2, x[0] / hyp2;
    return jac;
}

inline double sample_normal(double m, double s) {
    std::random_device rd{};
    std::mt19937 gen{ rd() };

    std::normal_distribution<> d{ m, s };
    return d(gen);
}

inline Eigen::VectorXd sample_normal(double m, double s, int N) {
    Eigen::VectorXd ret(N);
    for (int i = 0; i < N; i++)
        ret[i] = sample_normal(0.0, s);

    return ret;
}

inline Eigen::VectorXd sample_normal(Eigen::VectorXd s) {
    Eigen::VectorXd ret(s.size());
    for (int i = 0; i < s.size(); i++)
        ret[i] = sample_normal(0.0, s[i]);

    return ret;
}

inline std::vector<fsmath::Cone> parseCones(std::string path) {
    std::vector<fsmath::Cone> cones;
    int one_index;
    Cone test_cone;
    if (path.find("left") != std::string::npos) {
        test_cone.color().fromFloat(COLOR_FLOAT_BLUE);
        one_index = test_cone.coneClass();
    } else if (path.find("right") != std::string::npos) {
        test_cone.color().fromFloat(COLOR_FLOAT_YELLOW);
        one_index = test_cone.coneClass();
    } else if (path.find("orange") != std::string::npos) {
        test_cone.color().fromFloat(COLOR_FLOAT_ORANGE_SMALL);
        one_index = test_cone.coneClass();
    } else if (path.find("orange_big") != std::string::npos) {
        test_cone.color().fromFloat(COLOR_FLOAT_ORANGE_BIG);
        one_index = test_cone.coneClass();
    } else
        throw std::invalid_argument("Unknown cone color while parsing " + path);

    std::ifstream cones_file;
    cones_file.open(path, std::ios::in);
    if (!cones_file.is_open()) {
        std::cout << path << " file not found" << std::endl;
        return cones;  // return empty vector
    }

    double x, y;
    while (!cones_file.eof()) {
        cones_file >> x;
        cones_file >> y;
        cones.emplace_back(fsmath::Cone(x, y, one_index == 0 ? 1 : 0, one_index == 1 ? 1 : 0, one_index == 2 ? 1 : 0,
                                        one_index == 3 ? 1 : 0));
    }

    cones_file.close();
    return cones;
}

inline fsmath::Track parseTrackFolder(std::string path) {
    std::string left_cones_file_name = path + "/left.txt";
    std::string right_cones_file_name = path + "/right.txt";
    std::string orange_cones_file_name = path + "/orange.txt";
    std::string orange_big_cones_file_name = path + "/orange_big.txt";

    std::vector<fsmath::Cone> leftCones = parseCones(left_cones_file_name);
    std::vector<fsmath::Cone> rightCones = parseCones(right_cones_file_name);

    std::string info_file_name = path + "/info.yaml";

    YAML::Node yaml = YAML::LoadFile(info_file_name);
    fsmath::StartFinishLine startLine, finishLine;
    startLine.x1 = yaml["startx1"].as<double>();
    startLine.y1 = yaml["starty1"].as<double>();
    startLine.x2 = yaml["startx2"].as<double>();
    startLine.y2 = yaml["starty2"].as<double>();
    startLine.azimuth = yaml["azimuth"].as<double>();
    if (yaml["endx1"]) {
        // finish line is seperate from the starting line (e.g. acceleration)
        finishLine.x1 = yaml["endx1"].as<double>();
        finishLine.y1 = yaml["endy1"].as<double>();
        finishLine.x2 = yaml["endx2"].as<double>();
        finishLine.y2 = yaml["endy2"].as<double>();
        if (yaml["endAzimuth"])
            finishLine.y2 = yaml["endAzimuth"].as<double>();
        else
            finishLine.azimuth = startLine.azimuth;
    } else {
        // track is a closed loop; finish and start line are coincident
        finishLine.x1 = startLine.x1;
        finishLine.y1 = startLine.y1;
        finishLine.x2 = startLine.x2;
        finishLine.y2 = startLine.y2;
        finishLine.azimuth = startLine.azimuth;
    }
    double x, y, heading;
    if (yaml["startPoseX"])
        x = yaml["startPoseX"].as<double>();
    else
        x = 0;
    if (yaml["startPoseY"])
        y = yaml["startPoseY"].as<double>();
    else
        y = 0;
    if (yaml["startPoseHeading"])
        heading = yaml["startPoseHeading"].as<double>();
    else
        heading = 0;
    fsmath::Pose startPose(x, y, heading);

    return fsmath::Track(leftCones, rightCones, startLine, finishLine, startPose);
}

inline fsmath::Track parseTrack(std::string mission_name) {
    std::string package_share_path = ament_index_cpp::get_package_share_directory("turtle_common");
    std::string track_path = package_share_path + "/track_points/" + mission_name;
    return parseTrackFolder(track_path);
}
}  // namespace fsmath
#endif

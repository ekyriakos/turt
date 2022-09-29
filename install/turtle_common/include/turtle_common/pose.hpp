#ifndef FSMATH_POSE_H
#define FSMATH_POSE_H

#include "g2o/se2.h"
#include <Eigen/Core>

#include "cone.hpp"

namespace fsmath {

// Pose is a rigid body transformation in 2D, in the special euclidean group SE(2)
// theta is saved as an Eigen::Rotation2D
// angle is in radians, counter clock wise
// a pose is the transformation: "first translate by pose.translation(), then rotate by pose.rotation()"

class Pose : public g2o::SE2 {
  public:
    Pose() : g2o::SE2() {}

    Pose(double x, double y, double theta) : g2o::SE2(x, y, theta) {}

    Pose(const g2o::Vector3& v) : g2o::SE2(v) {}

    inline double heading() const {
        return _R.angle();
    }

    inline double x() const {
        return translation().x();
    }

    inline double y() const {
        return translation().y();
    }

    // motion composition operator
    // pose1 * pose2 is the transformation: "first transform by pose1, then transform by pose2"
    inline Pose operator*(const Pose& tr2) const {
        Pose result(*this);
        result *= tr2;
        return result;
    }

    // motion composition operator
    // pose1 * pose2 is the transformation: "first transform by pose1, then transform by pose2"
    inline Pose& operator*=(const Pose& tr2) {
        _t += _R * tr2._t;
        _R.angle() += tr2._R.angle();
        _R.angle() = normalize_theta(_R.angle());
        return *this;
    }

    inline Cone operator*(const Cone& cc) const {
        return Cone(_t + _R * cc.translation(), cc.color());
    }

    inline Eigen::Vector2d operator*(const Eigen::Vector2d& v) const {
        return _t + _R * v;
    }

    inline Pose operator*(const double d) const {
        Pose result(*this);
        result *= d;
        return result;
    }

    inline Pose& operator*=(const double d) {
        _t *= d;
        _R.angle() *= d;
        _R.angle() = normalize_theta(_R.angle());
        return *this;
    }

    inline Pose inverse() const {
        Pose ret;
        ret._R = _R.inverse();
        ret._R.angle() = normalize_theta(ret._R.angle());
#ifdef _MSC_VER
        ret._t = ret._R * (Vector2(_t * -1.));
#else
        ret._t = ret._R * (_t * -1.);
#endif
        return ret;
    }
};

}  // namespace fsmath

#endif

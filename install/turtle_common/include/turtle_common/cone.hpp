#ifndef FSMATH_CONE_H
#define FSMATH_CONE_H

#include <Eigen/Core>
#include <string>

#include "cone_color.hpp"

namespace fsmath {
class Cone
{
    public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    Cone():_t(0,0){}

    // creates a cone of unknown class
    Cone(const Eigen::Vector2d& t) : _t(t) {}

    Cone(const Eigen::Vector2d& t, const ConeColor& c):_t(t),_c(c){}
    Cone(const Eigen::Matrix<double,6,1>/*Vector6d*/ v):_t(v.head<2>()),_c(v.tail<4>()){}
    
    Cone(double x, double y, double c1, double c2, double c3, double c4):
    _t(x,y), _c(c1,c2,c3,c4) {}

    // creates a cone of unknown class
    Cone(double x, double y) : _t(x, y) {}

    Cone(double x, double y, std::string color) : _t(x, y) {
        if (color == "yellow") {
            _c.fromFloat(COLOR_FLOAT_YELLOW);
        } else if (color == "blue") {
            _c.fromFloat(COLOR_FLOAT_BLUE);
        } else if (color == "orange") {
            _c.fromFloat(COLOR_FLOAT_ORANGE_SMALL);
        } else if (color == "orange_big") {
            _c.fromFloat(COLOR_FLOAT_ORANGE_BIG);
        } else {
            throw std::invalid_argument("wrong color");
        }
    }

    const Eigen::Vector2d& translation() const {return _t;}
    Eigen::Vector2d& translation() {return _t;}

    const ConeColor color() const {return _c;}
    ConeColor& color() { return _c; }

    inline bool operator==(const Cone& other) const {
        return this->toVector().isApprox(other.toVector());
    }

    inline Cone operator + (const Cone& c2) const {
        Cone result(*this);
        result += c2;
        return result;
    }

    inline Cone operator - (const Cone& c2) const {
        Cone result(*this);
        result -= c2;
        return result;
    }

    inline Cone& operator += (const Cone& c2) {
        _t += c2._t;
        _c += c2._c;
        return *this;
    }

    inline Cone& operator -= (const Cone& c2) {
        _t -= c2._t;
        _c -= c2._c;
        return *this;
    }

    inline double operator[](int i) const {
        assert(i>=0 && i<6);
        if (i<2)
            return _t[i];
        else
            return _c[i-2];
    }

    inline double& operator[](int i) {
        assert(i>=0 && i<6);
        if (i<2)
            return _t[i];
        else
            return _c[i-2];
    }

    inline double x() const { return _t[0]; }
    inline double& x() { return _t[0]; }
    inline double y() const { return _t[1]; }
    inline double& y() { return _t[1]; }

    inline double squaredDistanceFromOrigin() const {
        return this->squaredDistanceFrom(Cone());
    }

    // squared euclidean distance
    inline double squaredDistanceFrom(const Cone& other) const {
        return (_t[0] - other._t[0]) * (_t[0] - other._t[0]) +
        (_t[1] - other._t[1]) * (_t[1] - other._t[1]);
    }

    // squared euclidean distance
    inline double squaredDistanceFrom(const Eigen::Vector2d& t) const {
        return this->squaredDistanceFrom(Cone(t));
    }

    double mahalanobisDistanceFrom(const Cone& other, Eigen::MatrixXd informationMatrix);

    uint8_t coneClass() const { return _c.coneClass(); }

    inline Eigen::VectorXd toVector() const {
        Eigen::VectorXd vec_joined(6);
        vec_joined << _t, _c.toVector();
        return vec_joined;
    }

    private:
    Eigen::Vector2d _t;
    ConeColor _c;
};
} // ns

#endif

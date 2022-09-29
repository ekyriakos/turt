#ifndef FSMATH_CONE_COLOR_H
#define FSMATH_CONE_COLOR_H

#define COLOR_FLOAT_UNKNOWN 33554430
#define COLOR_FLOAT_ORANGE_SMALL 33473536
#define COLOR_FLOAT_BLUE 9765071
#define COLOR_FLOAT_YELLOW 30277140
#define COLOR_FLOAT_ORANGE_BIG 29381120

#include <Eigen/Core>

namespace fsmath {

inline Eigen::VectorXd softmax(const Eigen::VectorXd& v, double a = 5) {
    Eigen::VectorXd tmp = (a * v.array()).exp();
    double sum = tmp.sum();
    return tmp.array() / sum;
}

// 4-element vector to encode the probability of the cone being of that class
// corresponds to classes [orange_small, blue, yellow, orange_big]
// [0.25, 0.25, 0.25, 0.25] means that the color is unknown
class ConeColor {
  protected:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    Eigen::Vector4d _c;

  public:
    ConeColor() : _c(0.25, 0.25, 0.25, 0.25) {}
    ConeColor(double c1, double c2, double c3, double c4) : _c(c1, c2, c3, c4) {}
    ConeColor(const Eigen::Vector4d& v) : _c(v) {}

    inline ConeColor operator+(const ConeColor& cc2) const {
        ConeColor result(*this);
        result += cc2;
        return result;
    }

    inline ConeColor operator-(const ConeColor& cc2) const {
        ConeColor result(*this);
        result -= cc2;
        return result;
    }

    inline ConeColor& operator+=(const ConeColor& cc2) {
        _c = softmax(_c + cc2._c);
        return *this;
    }

    inline ConeColor& operator-=(const ConeColor& cc2) {
        _c = softmax(_c - cc2._c);
        return *this;
    }

    double operator[](int i) const {
        return _c[i];
    }

    double& operator[](int i) {
        return _c[i];
    }

    void fromVector(const Eigen::Vector4d& v) {
        *this = ConeColor(v[0], v[1], v[2], v[3]);
    }

    Eigen::Vector4d toVector() const {
        Eigen::Vector4d ret = _c;
        return ret;
    }

    void fromFloat(float color) {
        if (color == COLOR_FLOAT_ORANGE_SMALL) {
            *this = ConeColor(1, 0, 0, 0);
        } else if (color == COLOR_FLOAT_BLUE) {
            *this = ConeColor(0, 1, 0, 0);
        } else if (color == COLOR_FLOAT_YELLOW) {
            *this = ConeColor(0, 0, 1, 0);
        } else if (color == COLOR_FLOAT_ORANGE_BIG) {
            *this = ConeColor(0, 0, 0, 1);
        } else {
            *this = ConeColor(0.25, 0.25, 0.25, 0.25);
        }
    }

    float toFloat() const {
        if (_c[0] == 0.25 && _c[1] == 0.25 && _c[2] == 0.25 && _c[0] == 0.25)
            return COLOR_FLOAT_UNKNOWN;
        switch (coneClass()) {
            case 0:
                return COLOR_FLOAT_ORANGE_SMALL;
            case 1:
                return COLOR_FLOAT_BLUE;
            case 2:
                return COLOR_FLOAT_YELLOW;
            case 3:
                return COLOR_FLOAT_ORANGE_BIG;
            default:
                return COLOR_FLOAT_UNKNOWN;
        }
    }

    int coneClass() const {
        int mx = 0;
        for (int i = 1; i < 4; i++)
            if (_c[i] > _c[mx])
                mx = i;
        return mx;
    }

    bool isOrangeBig() const {
        return this->toFloat() == COLOR_FLOAT_ORANGE_BIG;
    }

    bool isOrangeSmall() const {
        return this->toFloat() == COLOR_FLOAT_ORANGE_SMALL;
    }

    bool isYellow() const {
        return this->toFloat() == COLOR_FLOAT_YELLOW;
    }

    bool isBlue() const {
        return this->toFloat() == COLOR_FLOAT_BLUE;
    }
};
}  // namespace fsmath

#endif

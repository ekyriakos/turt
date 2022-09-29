#include "cone.hpp"

#include "fsmath.h"

namespace fsmath {

double Cone::mahalanobisDistanceFrom(const Cone& other, Eigen::MatrixXd informationMatrix) {
    return squaredMahalanobisDistance(this->toVector(), other.toVector(), informationMatrix);
}

}  // namespace fsmath
#ifndef FSMATH_TWIST_H
#define FSMATH_TWIST_H

#include "pose.hpp"

// Twist is the derivative of pose
// Angular momentum + speed

namespace fsmath {
// yes, I know twist is not pose, but it just so happens that Pose arithmetic is similar to Twist arithmetic
// and thus creating another type that has the exact same function definitions is pointless
using Twist = Pose;
}
#endif

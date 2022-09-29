#ifndef START_FINISH_LINE_HPP
#define START_FINISH_LINE_HPP

namespace fsmath {

/**
 * Represents a starting or finish line. If a finish line does not exist, it has an azimuth of >> 2*pi
 * (i.e. 100)
 */
struct StartFinishLine {
    double x1,y1,x2,y2,azimuth;
};

} // ns

#endif

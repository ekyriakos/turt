#ifndef TRACK_HPP
#define TRACK_HPP

#include "cone.hpp"
#include "start_finish_line.hpp"

#include <vector>

namespace fsmath {
class Track {
    private:
    std::vector<fsmath::Cone> leftCones_, rightCones_;
    fsmath::StartFinishLine startLine_, finishLine_;
    fsmath::Pose startPose_;

    public:
    Track() {}
    Track(std::vector<fsmath::Cone> leftCones, std::vector<fsmath::Cone> rightCones, 
            fsmath::StartFinishLine startLine, fsmath::StartFinishLine finishLine,
            fsmath::Pose startPose) : leftCones_(leftCones), rightCones_(rightCones),
            startLine_(startLine), finishLine_(finishLine), startPose_(startPose){
    }

    std::vector<fsmath::Cone> leftCones() const { return leftCones_; }
    std::vector<fsmath::Cone> rightCones() const { return rightCones_; }
    /**
     * Returns all cones in one vector. Avoid using this function when possible!
     * It copies all cones. Prefer to access each set of cones individually instead.
     */
    const std::vector<fsmath::Cone> allCones() const { 
        std::vector<fsmath::Cone> allCones;
        allCones.insert(allCones.end(), leftCones_.begin(), leftCones_.end());
        allCones.insert(allCones.end(), rightCones_.begin(), rightCones_.end());
        // TODO: add other types of cones as well
        return allCones; 
    }
    fsmath::StartFinishLine startLine() const { return startLine_; }
    fsmath::StartFinishLine finishLine() const { return finishLine_; }
    fsmath::Pose startPose() const { return startPose_; }
};
} // ns

#endif

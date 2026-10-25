#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <string>
#include "TrafficSignal.h"

class Intersection {
private:
    TrafficSignal signal;

public:
    Intersection();
    void changeSignal();
    bool isGreen() const;
    std::string getSignal() const;
};

#endif

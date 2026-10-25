#ifndef TRAFFIC_SIMULATOR_H
#define TRAFFIC_SIMULATOR_H

#include <string>
#include "Intersection.h"
#include "Vehicle.h"

class TrafficSimulator {
private:
    Intersection intersection;

public:
    TrafficSimulator();
    void changeSignal();
    void operator()(Vehicle& vehicle);
    std::string getSignal() const;
};

#endif

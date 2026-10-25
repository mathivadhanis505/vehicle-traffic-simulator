#include "TrafficSimulator.h"

TrafficSimulator::TrafficSimulator() : intersection() {}

void TrafficSimulator::changeSignal() { intersection.changeSignal(); }

// Calling the simulator advances one vehicle by one simulation step.
void TrafficSimulator::operator()(Vehicle& vehicle) {
    if (intersection.isGreen()) vehicle.move();
    else vehicle.waitOneMinute();
}

std::string TrafficSimulator::getSignal() const { return intersection.getSignal(); }

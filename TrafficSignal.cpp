#include "TrafficSignal.h"

TrafficSignal::TrafficSignal() : currentLight("RED") {}

void TrafficSignal::changeLight() {
    if (currentLight == "RED") currentLight = "GREEN";
    else currentLight = "RED";
}

bool TrafficSignal::allowsVehicles() const { return currentLight == "GREEN"; }
std::string TrafficSignal::getLight() const { return currentLight; }

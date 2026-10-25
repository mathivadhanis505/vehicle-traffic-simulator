#ifndef TRAFFIC_SIGNAL_H
#define TRAFFIC_SIGNAL_H

#include <string>

class TrafficSignal {
private:
    std::string currentLight;

public:
    TrafficSignal();
    void changeLight();
    bool allowsVehicles() const;
    std::string getLight() const;
};

#endif

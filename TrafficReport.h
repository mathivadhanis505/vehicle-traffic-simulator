#ifndef TRAFFIC_REPORT_H
#define TRAFFIC_REPORT_H

#include <iostream>

class TrafficReport {
private:
    int vehicleCount;
    int totalWaitingTime;

public:
    TrafficReport(int count = 0, int waiting = 0);
    TrafficReport operator+(const TrafficReport& other) const;
    friend std::ostream& operator<<(std::ostream& output, const TrafficReport& report);
};

#endif

#include "TrafficReport.h"

TrafficReport::TrafficReport(int count, int waiting)
    : vehicleCount(count), totalWaitingTime(waiting) {}

TrafficReport TrafficReport::operator+(const TrafficReport& other) const {
    return TrafficReport(vehicleCount + other.vehicleCount,
                         totalWaitingTime + other.totalWaitingTime);
}

std::ostream& operator<<(std::ostream& output, const TrafficReport& report) {
    output << "Vehicles: " << report.vehicleCount
           << " | total waiting time: " << report.totalWaitingTime << " min";
    return output;
}

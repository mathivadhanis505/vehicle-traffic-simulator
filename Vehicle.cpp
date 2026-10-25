#include "Vehicle.h"

int Vehicle::nextId = 1;
int Vehicle::totalCreated = 0;

Vehicle::Vehicle(const std::string& vehicleType, double initialSpeed, double initialFuel)
    : id(nextId++), type(vehicleType), speed(initialSpeed), position(0.0),
      fuel(initialFuel), waitingTime(0) {
    ++totalCreated;
}

Vehicle::~Vehicle() {
    std::cout << "Vehicle " << id << " removed from the simulation.\n";
}

int Vehicle::getId() const { return id; }
double Vehicle::getPosition() const { return position; }
int Vehicle::getWaitingTime() const { return waitingTime; }

void Vehicle::move() {
    if (fuel > 0.0) {
        position += speed;
        fuel -= 1.0;
    }
}

void Vehicle::waitOneMinute() { ++waitingTime; }

bool Vehicle::operator==(const Vehicle& other) const {
    return id == other.id;
}

int Vehicle::getTotalCreated() { return totalCreated; }

std::ostream& operator<<(std::ostream& output, const Vehicle& vehicle) {
    output << "Vehicle #" << vehicle.id << " (" << vehicle.type << ")"
           << " | position: " << vehicle.position
           << " | waiting: " << vehicle.waitingTime << " min"
           << " | fuel: " << vehicle.fuel;
    return output;
}

void printTrafficReport(const Vehicle& vehicle) {
    std::cout << "Report for vehicle #" << vehicle.id
              << ": speed=" << vehicle.speed
              << ", position=" << vehicle.position
              << ", waiting=" << vehicle.waitingTime << " min\n";
}

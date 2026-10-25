#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle {
private:
    static int nextId;
    static int totalCreated;
    int id;
    std::string type;
    double speed;
    double position;
    double fuel;
    int waitingTime;

public:
    Vehicle(const std::string& vehicleType, double initialSpeed, double initialFuel);
    ~Vehicle();

    int getId() const;
    double getPosition() const;
    int getWaitingTime() const;
    void move();
    void waitOneMinute();
    bool operator==(const Vehicle& other) const;

    static int getTotalCreated();

    friend std::ostream& operator<<(std::ostream& output, const Vehicle& vehicle);
    friend void printTrafficReport(const Vehicle& vehicle);
};

#endif

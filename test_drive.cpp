#include <iostream>
#include <string>
#include "TrafficReport.h"
#include "TrafficSimulator.h"
#include "Vehicle.h"

int main() {
    std::string firstType;
    std::string secondType;
    double firstSpeed;
    double secondSpeed;
    double firstFuel;
    double secondFuel;
    int steps;

    std::cout << "CROSSFLOW traffic simulation\n";
    std::cout << "Enter first vehicle type (Car/Bus/Truck), speed, and fuel (example: Car 10 5): ";
    std::cin >> firstType >> firstSpeed >> firstFuel;
    std::cout << "Enter second vehicle type (Car/Bus/Truck), speed, and fuel (example: Bus 6 8): ";
    std::cin >> secondType >> secondSpeed >> secondFuel;
    std::cout << "How many simulation steps? Enter a whole number (example: 3): ";
    std::cin >> steps;

    Vehicle car(firstType, firstSpeed, firstFuel);
    Vehicle bus(secondType, secondSpeed, secondFuel);
    TrafficSimulator simulator;

    std::cout << "Initial signal: " << simulator.getSignal() << "\n\n";

    for (int step = 1; step <= steps; ++step) {
        int changeLight;
        std::cout << "Step " << step << " - signal is " << simulator.getSignal()
                  << ". Change it? Enter 1 for yes or 0 for no: ";
        std::cin >> changeLight;
        if (changeLight == 1) simulator.changeSignal();

        simulator(car);
        simulator(bus);
    }

    std::cout << "\nSimulation results:\n";
    std::cout << car << "\n" << bus << "\n";
    printTrafficReport(car);
    std::cout << "Same vehicle? " << (car == bus ? "yes" : "no") << "\n";

    TrafficReport northRoad(1, car.getWaitingTime());
    TrafficReport southRoad(1, bus.getWaitingTime());
    std::cout << "Combined traffic report: " << northRoad + southRoad << "\n";
    std::cout << "Vehicles created: " << Vehicle::getTotalCreated() << "\n";
    return 0;
}

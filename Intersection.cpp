#include "Intersection.h"

Intersection::Intersection() : signal() {}

void Intersection::changeSignal() { signal.changeLight(); }
bool Intersection::isGreen() const { return signal.allowsVehicles(); }
std::string Intersection::getSignal() const { return signal.getLight(); }

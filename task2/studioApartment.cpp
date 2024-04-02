#include <iostream>
#include "studioApartment.h"

StudioApartment::StudioApartment(double area, int floor)
    : OneRoomApartment(area, 0, floor) {}

void StudioApartment::print() const {
    std::cout << "Studio Area: " << getRoomArea()
              << ", Floor: " << getFloor() << std::endl;
}

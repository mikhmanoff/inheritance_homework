#include <iostream>
#include "cityApartment.h"

CityApartment::CityApartment(double roomArea, double kitchenArea, int floor, std::string city)
    : OneRoomApartment(roomArea, kitchenArea, floor), city(city) {}

CityApartment::~CityApartment() {}

void CityApartment::print() const {
    std::cout << "Room Area: " << getRoomArea()
              << ", Kitchen Area: " << getKitchenArea()
              << ", Floor: " << getFloor()
              << ", City: " << city << std::endl;
}

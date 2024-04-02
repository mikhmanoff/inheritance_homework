#ifndef CITY_APARTMENT_H
#define CITY_APARTMENT_H

#include <string>

#include "oneRoomApartment.h"

class CityApartment : public OneRoomApartment {
private:
    std::string city;

public:
    CityApartment(double roomArea, double kitchenArea, int floor, std::string city);
    ~CityApartment();
    void print() const;
};

#endif // CITY_APARTMENT_H

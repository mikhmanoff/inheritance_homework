#ifndef STUDIO_APARTMENT_H
#define STUDIO_APARTMENT_H

#include "oneRoomApartment.h"

class StudioApartment : public OneRoomApartment {
public:
    StudioApartment(double area, int floor);
    void print() const;
};

#endif // STUDIO_APARTMENT_H

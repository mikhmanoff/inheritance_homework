#ifndef ONE_ROOM_APARTMENT_H
#define ONE_ROOM_APARTMENT_H

#include "room.h"

class OneRoomApartment {
private:
    Room room;
    double kitchenArea;
    int floor;

public:
    OneRoomApartment(double roomArea, double kitchenArea, int floor);
    double getRoomArea() const;
    double getKitchenArea() const;
    int getFloor() const;
};

#endif // ONE_ROOM_APARTMENT_H

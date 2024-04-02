#include "oneRoomApartment.h"

OneRoomApartment::OneRoomApartment(double roomArea, double kitchenArea, int floor)
    : room(roomArea), kitchenArea(kitchenArea), floor(floor) {}

double OneRoomApartment::getRoomArea() const {
    return room.getArea();
}

double OneRoomApartment::getKitchenArea() const {
    return kitchenArea;
}

int OneRoomApartment::getFloor() const {
    return floor;
}

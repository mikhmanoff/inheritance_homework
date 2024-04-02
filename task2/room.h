#ifndef ROOM_H
#define ROOM_H

class Room {
private:
    double area;

public:
    Room(double area);
    double getArea() const;
};

#endif // ROOM_H
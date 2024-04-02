#include <iostream>
#include "cityApartment.h"
#include "studioApartment.h"

int main() {
    // Создание объекта CityApartment
    CityApartment cityApartment(30.5, 10.5, 2, "New York");
    cityApartment.print(); // Вывод информации о CityApartment

    // Создание объекта StudioApartment
    StudioApartment studioApartment(40.5, 3);
    studioApartment.print(); // Вывод информации о StudioApartment

    return 0;
}

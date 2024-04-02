#include "grandchild.h"
#include <iostream>

Grandchild::Grandchild() : Child1(), uniqueField("Default") {}

Grandchild::Grandchild(const std::string& strValue, int intValue, double dblValue, const std::string& uniqueValue) 
    : Child1(strValue, intValue, dblValue), uniqueField(uniqueValue) {}

void Grandchild::print() const {
    Child1::print(); // Вызов метода print из базового класса Child1
    std::cout << "Grandchild unique field: " << uniqueField << std::endl;
}

void Grandchild::setUniqueField(const std::string& value) {
    uniqueField = value;
}

std::string Grandchild::getUniqueField() const {
    return uniqueField;
}

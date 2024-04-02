#include "child1.h"

int Child1::staticValue = 0; // Инициализация статического члена

Child1::Child1() : Parent(), dynamicValue(new double(0.0)) {}

Child1::Child1(const std::string& strValue, int intValue, double dblValue) : Parent(strValue, intValue), dynamicValue(new double(dblValue)) {}

Child1::Child1(const Child1& other) : Parent(other), dynamicValue(new double(*other.dynamicValue)) {}

Child1::~Child1() {
    delete dynamicValue;
}

void Child1::print() const {
    std::cout << "Child1 print. DynamicField: " << getDynamicField() << ", StaticField: " << getStaticField() << ", DynamicValue: " << *dynamicValue << std::endl;
}

void Child1::setDynamicValue(double value) {
    *dynamicValue = value;
}

double Child1::getDynamicValue() const {
    return *dynamicValue;
}

void Child1::setStaticValue(int value) {
    staticValue = value;
}

int Child1::getStaticValue() {
    return staticValue;
}

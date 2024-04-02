#include "parent.h"

Parent::Parent() : dynamicField(new std::string("Default")), staticField(0) {}

Parent::Parent(const Parent& other) : dynamicField(new std::string(*other.dynamicField)), staticField(other.staticField) {}

Parent::Parent(const std::string& value, int number) : dynamicField(new std::string(value)), staticField(number) {}

Parent::~Parent() {
    delete dynamicField;
}

void Parent::show() const {
    std::cout << "Dynamic Field: " << *dynamicField << ", Static Field: " << staticField << std::endl;
}

void Parent::modify(const std::string& newValue) {
    *dynamicField = newValue;
}

void Parent::print() const {
    std::cout << "Parent print" << std::endl;
}

void Parent::overloadMethod() {
    std::cout << "Overload without parameters" << std::endl;
}

void Parent::overloadMethod(const std::string& param) {
    std::cout << "Overload with string parameter: " << param << std::endl;
}

void Parent::callPrivateMethod() const {
    privateMethod();
}

void Parent::privateMethod() const {
    std::cout << "Private method called" << std::endl;
}

std::string Parent::getDynamicField() const {
    return *dynamicField;
}

void Parent::setDynamicField(const std::string& value) {
    *dynamicField = value;
}

int Parent::getStaticField() const {
    return staticField;
}

void Parent::setStaticField(int value) {
    staticField = value;
}

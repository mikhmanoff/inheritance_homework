#include "child2.h"

bool Child2::staticFlag = false; // Инициализация статического поля

Child2::Child2() : Parent(), dynamicChar(new char('A')) {}

Child2::Child2(const std::string& strValue, int intValue, char charValue) : Parent(strValue, intValue), dynamicChar(new char(charValue)) {}

Child2::Child2(const Child2& other) : Parent(other), dynamicChar(new char(*other.dynamicChar)) {}

Child2::~Child2() {
    delete dynamicChar;
}

void Child2::print() const {
    // Доступ к защищенным членам Parent возможен, так как Child2 наследуется от Parent
    std::cout << "Child2 print. DynamicField: " << getDynamicField() << ", StaticField: " << getStaticField() << ", DynamicChar: " << *dynamicChar << std::endl;
}

void Child2::setDynamicChar(char value) {
    *dynamicChar = value;
}

char Child2::getDynamicChar() const {
    return *dynamicChar;
}

void Child2::setStaticFlag(bool value) {
    staticFlag = value;
}

bool Child2::getStaticFlag() {
    return staticFlag;
}

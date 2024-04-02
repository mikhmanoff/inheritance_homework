#ifndef CHILD2_H
#define CHILD2_H

#include <iostream>

#include "parent.h"

class Child2 : protected Parent {
private:
    static bool staticFlag;
    char* dynamicChar;

public:
    Child2();
    Child2(const std::string& strValue, int intValue, char charValue);
    Child2(const Child2& other);
    ~Child2() override;

    void print() const override;

    void setDynamicChar(char value);
    char getDynamicChar() const;

    static void setStaticFlag(bool value);
    static bool getStaticFlag();
};

#endif // CHILD2_H

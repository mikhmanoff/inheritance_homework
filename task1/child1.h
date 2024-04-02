#ifndef CHILD1_H
#define CHILD1_H

#include <iostream>

#include "parent.h" // Подключаем базовый класс

class Child1 : public Parent {
private:
    static int staticValue;
    double* dynamicValue;

public:
    Child1();
    Child1(const std::string& strValue, int intValue, double dblValue);
    Child1(const Child1& other);
    ~Child1() override;

    void print() const override;

    void setDynamicValue(double value);
    double getDynamicValue() const;

    static void setStaticValue(int value);
    static int getStaticValue();
};

#endif // CHILD1_H

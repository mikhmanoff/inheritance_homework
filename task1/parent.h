#ifndef PARENT_H
#define PARENT_H

#include <string>
#include <iostream>

class Parent {
protected:
    std::string* dynamicField;
    int staticField;

    void privateMethod() const;

public:
    Parent();
    Parent(const Parent& other);
    Parent(const std::string& value, int number);
    virtual ~Parent();

    void show() const;
    void modify(const std::string& newValue);
    virtual void print() const;

    void overloadMethod();
    void overloadMethod(const std::string& param);

    void callPrivateMethod() const;

    std::string getDynamicField() const;
    void setDynamicField(const std::string& value);

    int getStaticField() const;
    void setStaticField(int value);
};

#endif //PARENT_H
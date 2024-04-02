#ifndef GRANDCHILD_H
#define GRANDCHILD_H

#include "child1.h" // Включаем объявление базового класса Child1

class Grandchild : public Child1 {
private:
    std::string uniqueField;

public:
    Grandchild();
    Grandchild(const std::string& strValue, int intValue, double dblValue, const std::string& uniqueValue);

    void print() const override; // Переопределение метода базового класса

    void setUniqueField(const std::string& value);
    std::string getUniqueField() const;
};

#endif // GRANDCHILD_H

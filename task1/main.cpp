#include <iostream>
#include "parent.h"
#include "child1.h"
#include "child2.h"
#include "grandchild.h"

int main() {
    // Создание объекта Parent
    Parent parentObj("ParentValue", 100);
    parentObj.print();
    parentObj.overloadMethod();
    parentObj.overloadMethod("Parent overloaded method with parameter");

    // Создание объекта Child1
    Child1 child1Obj("Child1Value", 200, 10.5);
    child1Obj.print();
    Child1::setStaticValue(15); // Использование статического метода
    std::cout << "Static value from Child1: " << Child1::getStaticValue() << std::endl;

    // Создание объекта Child2 (примечание: доступ к методам Parent будет ограничен из-за защищенного наследования)
    Child2 child2Obj;
    // child2Obj.print(); // Не будет работать напрямую, если не предоставлен специальный интерфейс

    // Создание объекта Grandchild
    Grandchild grandchildObj("GrandchildValue", 300, 20.5, "UniqueValue");
    grandchildObj.print();

    return 0;
}

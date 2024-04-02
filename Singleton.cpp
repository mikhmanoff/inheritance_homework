// Конструктор класса Singleton остается приватным, 
// что предотвращает создание экземпляров извне.
// Метод getInstance() возвращает ссылку на статическую 
// локальную переменную instance, которая инициализируется при 
// первом вызове getInstance(). Компилятор гарантирует, 
// что инициализация будет безопасной в многопоточной среде 
// и выполнится только один раз.
// Классические проблемы многопоточности 
// с ленивой инициализацией Singleton решаются 
// без явного использования мьютексов благодаря гарантиям, 
// предоставляемым стандартом C++11 и более поздними версиями.

#include <iostream>

class Singleton {
public:
    // Удаление возможности копирования и присваивания
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Статический метод для доступа к единственному экземпляру
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    void doSomething() {
        // Пример работы метода
        std::cout << "Doing something\n";
    }

private:
    // Приватный конструктор, чтобы не было возможности создать объект напрямую
    Singleton() {}
};

int main() {
    // Получение доступа к единственному экземпляру
    Singleton& singleton = Singleton::getInstance();
    singleton.doSomething();

    return 0;
}

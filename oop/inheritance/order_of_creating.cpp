#include <iostream>

struct Field {
    Field() {
        std::cout << "Field()" << std::endl;
    }

    ~Field() {
        std::cout << "~Field()" << std::endl;
    }
};

class Base {
public:
    Base() {
        std::cout << "Base()" << std::endl;
    }

    ~Base() {
        std::cout << "~Base()" << std::endl;
    }
};

class Derived: public Base {
public:
    Derived() {
        std::cout << "Derived()" << std::endl;
    }

    ~Derived() {
        std::cout << "~Derived()" << std::endl;
    }
private:
    Field field_;
};

int main() {
    Derived d;
    return 0;
}
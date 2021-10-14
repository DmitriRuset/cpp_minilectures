#include <iostream>

struct Base {
    virtual void f(int) {   
        std::cout << "Base\n";
    }
    // void f(double) {
    //     std::cout << "Non virtual\n";
    // }
};

struct Derived: public Base {
    // void f(int) {
    //     std::cout << "int Derived\n";
    // }
    void f(double) {
        std::cout << "Derived\n";
    }
};

int main() {
    Derived d;
    Base& b = d;
    d.f(0.0);
    b.f(0.0);

    d.Base::f(0);
    return 0;
}
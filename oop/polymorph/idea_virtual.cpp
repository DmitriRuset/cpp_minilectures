#include <iostream>


// struct Base {
//     virtual void f() {
//         std::cout << "Base\n";
//     }
// };

// struct Derived: public Base {
//     void f() {
//         std::cout << "Derived\n";
//     }
// };

// Example 2 (aka virtual in runtime)

struct Base {
    virtual void f() {
        std::cout << "Base\n";
    }
};

struct Derived: public Base {
private:
    void f() {
        std::cout << "Derived\n";
    }
};

int main() {
    Derived d;
    Base& b = d;

    b.f();
    return 0;
}
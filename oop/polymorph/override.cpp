#include <iostream>

// C++11. override

// Example 1 (beginning)
// struct Base {
//     virtual void f(int) {
//         std::cout << "Base\n";
//     }
// };

// struct Derived: public Base {
//     int f(int) {
//         std::cout << "Derived\n";
//     }
// };

// Example 2 (key-word override)
// struct Base {
//     virtual void f(int) const { 
//         std::cout << "Base\n";
//     }
// };

// struct Derived: public Base {  
//     void f(int) override {
//         std::cout << "Derived\n";
//     }
// };


// Example 3 (final)

// struct Base {
//     virtual void f(int) const {
//         std::cout << "Base\n";
//     }
// };

// struct Derived: public Base {  
//     void f(int) const {
//         std::cout << "Derived\n";
//     }
// };

// struct GrandDerived: public Derived {
//     void f(int) const {
//         std::cout << "GrandDerived\n";
//     }
// };

int main() {
    // Ex 1
    // Derived d;
    // Base& b = d;
    // b.f(0);

    // Ex 2
    // Derived d;
    // Base& b = d;

    // d.f(0);
    // b.f(0);
    
    return 0;
}
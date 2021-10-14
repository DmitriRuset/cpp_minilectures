#include <iostream>

// Note: type is not polymorphic!
struct Base {
    virtual ~Base() {};
};
// Even if class can have a default destructor, we have to make it virtual
// If it is pure virtual, we still have to define it, otherwise LE

struct Derived: public Base {
    int* dp = new int(); 

    ~Derived() {
        delete dp;
        std::cout << "~Derived()\n";
    }
};

int main() {
    Base* b = new Derived();

    delete b;

    return 0;
}
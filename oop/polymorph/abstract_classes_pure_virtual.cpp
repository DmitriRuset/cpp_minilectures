#include <iostream>
#include <vector>

// Abstract class
struct Base {
    virtual void f(int) = 0; // pure virtual function
};

struct Derived: public Base {
    void f(int) override {
        std::cout << "Derived\n";
    }
};

struct Son: public Base {
    void f(int) override {
        std::cout << "Son\n";
    }
};


int main() {
    //Base b; //CE, abstract class

    Derived d;
    d.f(0);

    Base& b = d;
    b.f(0);

    std::vector<Base*> v;

    v.push_back(new Son());
    v.push_back(new Derived());

    for (auto& item: v) {
        item->f(0);
    }

    return 0;
}
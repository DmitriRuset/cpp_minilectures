#include <iostream>

class Base {
protected:
    int field_ = 5;
private:
    friend int main();
};

class Derived: public Base {
public:
    int get_field() {
        return field_;
    }
};

class Base1 {
protected:
    int field_ = 7;
};

class Derived1: public Base1 {
public:
    void g(const Base1& x) {
        std::cout << x.field_;
    }
};

// class SubDerived1: public Derived1 {
// public:
//     void print_field() {
//         std::cout << field_ << '\n';
//     }
// };

int main() {
    // Derived d;
    
    // std::cout << d.get_field() << std::endl;

    // std::cout << d.field_ << std::endl;

    //SubDerived1 sd;

    //sd.print_field();

    Derived1 d1;
    Base1 b1;

    d1.g(b1);
    
    return 0;
}
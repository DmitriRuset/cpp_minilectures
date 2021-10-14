#include <iostream>

struct Granny {
    int g;
    virtual void f() {}
};

struct Mom: public Granny {
    int m;
    // void f() {
    //     std::cout << "Mom\n";
    // }
};

struct Dad: public Granny {
    int d;
    // void f() {
    //     std::cout << "Dad\n";
    // }
};

struct Son: public Mom, public Dad {
    int s;
};

int main() {
    Son s;
    s.f();

    // Son s;

    // Mom* m = &s;
    // //Dad& d = m; //incompatible types
    // Dad* d = dynamic_cast<Dad*>(m);


    // try {
    //     Mom m;
    //     Dad& d = dynamic_cast<Dad&>(m); //std::bad_cast
    // } catch (...) {
    //     std::cout << "Will be exception!\n";
    // }

    // {
    //     Mom m;
    //     Dad* d = dynamic_cast<Dad*>(&m);
    //     if (d == nullptr) {
    //         std::cout << "Will be nullptr\n";
    //     }
    // }

    return 0;
}
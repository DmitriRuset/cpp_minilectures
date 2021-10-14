#include <iostream>

struct Granny {
    int x = 5;

    void f() {
        std::cout << "a ";
    }
};

struct Mom: private Granny {
    int d;
    
    void f(int a) {
        std::cout << "int";
    }
};

class Son: public Mom {
public:
    int e;

    void f(double a) {
        std::cout << "double";
    }
};


int main() {
    Son s;

    s.f(1);
    return 0;
}
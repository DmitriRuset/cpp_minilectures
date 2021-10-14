#include <iostream>

//[G][M][G][D][S]

//[mom_ptr][M][dad_ptr][D][S][G]

struct Granny {
    int g = 42;
};

struct Mom: public virtual Granny {
    int m;
};

struct Dad: public virtual Granny {
    int d;
};

class Son: public Mom, public Dad {
public:
    int s;

    void f() {
        std::cout << g;
    }
};


int main() {
    Son s;
    s.f();
    return 0;
}
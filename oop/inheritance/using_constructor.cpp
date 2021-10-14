#include <iostream>

struct Mom {
    int x;

    Mom(int x): x(x) {
        std::cout << "Mom " << x << '\n';
    }

};

struct Son: public Mom {
    using Mom::Mom; // Have all Mom's constructors

    int y = 0; //by default
    // Son(int x): Mom(x), y(x) { // will be preferred to Mom's   
    //     std::cout << "Son " << y << '\n';
    // }
};

int main() {
    Son s(6);
    std::cout << s.y << std::endl;
    return 0;
}
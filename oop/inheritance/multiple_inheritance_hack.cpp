#include <bits/stdc++.h>

using namespace std;

class A {
private:
    string x = "A";
};

class B {
public:
    string x = "B";
};


class C: private A, public B {
public:
    string x = "C";
};


template <typename T>
void func(T& thing) {
    cout << thing.x << endl;
}

int main() {
    C c;
    // Normal cast
    std::cout << "static_cast" << std::endl;
    func(static_cast<B&>(c));

    // Now we can access A fields)))
    std::cout << "reinterpret_cast" << std::endl;
    func(reinterpret_cast<B&>(c));

    return 0;
}

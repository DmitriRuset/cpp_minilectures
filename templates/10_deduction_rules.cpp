#include <iostream>
#include <type_traits>
#include <functional>
#include <vector>

template <typename T>
class C {
    C() = delete;
};


template <typename T>
void f(T x) {
    //x.get() = 5;
    C<T>();
    //std::cout << std::is_reference_v<T>;
}

// int& g() {
//     int x;
//     return x;
// }

// since c++17 (deduction guides)

template <typename T>
struct S {
    S(T list) = delete;
};

S(const char*) -> S<std::string>;

int main() {
    int x = 0;

    // int& y = x;

    f(x);
    
    //f(std::ref(x));

    //std::cout << x << std::endl;

    //S s("abs");

    //std::vector v{1};
    //std::cout << std::is_same_v<std::vector<double>, decltype(v)>;

    
    return 0;
}
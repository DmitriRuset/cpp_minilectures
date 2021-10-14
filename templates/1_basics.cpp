#include <iostream>

// templates: classes, functions, aliases (11), variables (14)
// no local scope


template <typename T>
struct S {
    template <typename U>
    void f(T a, U arg);
};

template <typename T>
template <typename U>
void S<T>::f<U>(T a, U arg) {
}


template <typename T, typename U>
void f(T a, U arg) {

}

template <typename T> // c++11
using strmap = std::map<T, std::string>;

template <typename T> // c++14
const bool val;


int main() {
    S<int> s;
    s.f(5, 10.3);
    return 0;
}
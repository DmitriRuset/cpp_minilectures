#include <iostream>

template <typename T>
struct Hash;

template <>
struct Hash<int> {
    int operator()(int x) {
        return x * x;
    }
};


template <typename T>
struct S {
    T x = 0;
};

template <>
struct S<int> {
    int y = 0;
};


// from here

template <typename T, typename U>
void f(T x, U y) {
    std::cout << "T, U\n";
}

template <typename T>
void f(T x, T y) {
    std::cout << "T\n";
} 

template <> 
void f(int x, int y) {
    std::cout << "int\n";
}
// and then swap them))

// partial specialization

template <typename T, typename U>
struct MS {
    void f() {
        std::cout << "1 MS<T, U>\n";
    }
};

template <typename T, typename U>
struct MS<T&, U&> {
    void f() {
        std::cout << "2 MS<T&, U&>\n";
    }
};

template <typename T>
struct MS<T, T> {
    void f() {
        std::cout << "3 MS<T, T>\n";
    }
};


int main() {
    //S<double> sd;
    //S<float> sf = sd;

    // S<int> si;
    // si.y;

    //Hash<double> h;
    //f(0, 0);

    //MS<int&, int&> s;
    //s.f();
}
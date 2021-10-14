#include <iostream>
#include <string>
#include <vector>

// полное соответствие лучше кастов
template <typename T, typename U>
void f (T x, U y) {
    std::cout << 1 << '\n';
}

template <typename T>
void f(T x, T y) {
    std::cout << 2 << '\n';
}

void f(int x, int y) {
    std::cout << 3 << '\n';
}

template <typename T>
void g(T f) {
    std::cout << "without &\n";
}


template <typename T>
void g(T& f) {
    std::cout << "with &\n";
}


template <typename T, typename U = std::string>
void h(T x) {
    U y = 1;
    std::cout << y << '\n';
}


struct S {
    S() = default;

    template <typename U> // solve with enable_if (and mb with concepts)
    S(U& x) {
        std::cout << "U\n";
    }

    S(const S&) {
        std::cout << "const S&\n";
    }
};


template <typename T>
void ff(std::vector<T>&) {
    std::cout << 1 << '\n';
}

template <typename T>
void e() {
    std::cout << 1 << '\n';
}

int main() {
    // f(1, 1.5);
    // f(1.5, 1.5);
    // f(1, 1);

    // f<int>(1.5, 5);
    // f<>(1.5, 1); // only templates

    //g(1);
    // int x = 0;
    // g(x);

    //h(0);

    //S s;
    //S ss = s;
    
    // std::vector<int> v = {1, 2, 3};
    // ff(v);
    return 0;
}
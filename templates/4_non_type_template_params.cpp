#include <iostream>
#include <array>


template <typename T, size_t N> // can't be double, float, our classes
class array {
public:
private:
    T a[N];
};

template <typename T, T* P>
struct MyStruct {

};

template <typename Field, size_t M, size_t N>
class Matrix {

};

template <typename Field, size_t M, size_t N, size_t K>
Matrix<Field, M, K> operator* (const Matrix<Field, M, N>&, const Matrix<Field, N, K>&);


int f(int x) {
    return x * x;
}

int main() {
    const int x = Fib<10>::value;
    std::array<int, x> aa;
    std::array<int, 10> a;
    return 0;
}
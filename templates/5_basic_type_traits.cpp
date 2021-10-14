#include <iostream>
#include <type_traits>

// is_same

template <typename T, typename U>
struct is_same {
    static const bool value = false;
};

template <typename T>
struct is_same<T, T> {
    static const bool value = true;
};


template <typename T, typename U>
const bool is_same_v = is_same<T, U>::value;

// remove_const

template <typename T>
struct remove_const {
    using type = T;
};

template <typename T>
struct remove_const<const T> {
    using type = T;
    typedef T type;
};

template <typename T>
using remove_const_t = typename remove_const<T>::type;

// remove_extent

template <typename T>
struct remove_extent {
    using type = T;
};

template <typename T>
struct remove_extent<T[]> {
    using type = T;
};

template <typename T>
using remove_extent_t = typename remove_extent<T>::type;


template <typename T, typename U>
void f(T x, U y) {
    if (is_same_v<T, U>) {
        std::cout << "same\n";
    } else {
        std::cout << "different\n";
    }
}

template <typename T>
void g() {
    //std::decay_t<T>
}   

int main() {
    int x = 0;
    f(x, x);
    return 0;
}
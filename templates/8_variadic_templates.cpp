#include <iostream>
#include <type_traits>

template <typename First, typename Second, typename... Tail>
struct is_homogeneous {
    static const bool value = std::is_same<First, Second>::value && is_homogeneous<Second, Tail...>::value;
};

template <typename T, typename U>
struct is_homogeneous<T, U> {
    static const bool value = std::is_same<T, U>::value;
};

int main() {
    std::cout << is_homogeneous<int, int, int>::value;
    std::cout << is_homogeneous<int, int, double>::value;
}
#include <iostream>
#include <type_traits>

//since C++17

template <typename Head, typename... Tail>
struct is_homogeneous {
    static const bool value = (std::is_same<Head, Tail>::value && ...);
};

template <typename Head, typename... Tail>
const bool is_homogeneous_v = is_homogeneous<Head, Tail...>::value;

template <typename... Args>
void print(const Args&... args) {
    (std::cout << ... << args) << '\n';
}


int main() {
    std::cout << is_homogeneous_v<int> << '\n';
    //print(1, 2.5, "hello");
}
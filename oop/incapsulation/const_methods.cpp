#include <iostream>

class A {
public:
    A(): field_(5) {}

    explicit A(int field): field_(field) {
        std::cout << "int" << std::endl;
    }

    A(int64_t field): field_(field) {
        std::cout << "int64_t" << std::endl;
    }

    A(const A&) = delete;

    A& operator=(const A& other) {
        std::cout << "operator= copy" << std::endl;
        this->field_ = other.field_;
        return *this;
    }

    friend std::ostream& operator<< (std::ostream& out, A& a) {
        out << a.field_;
        return out;
    }

    static void inc() {
        counter_;
    }

    ~A() = default;

    int field_;
    static const int counter_{0};
};

int main() {
    int A::* p = &A::field_;

    A a;

    std::cout << a.*p;

    return 0;
}
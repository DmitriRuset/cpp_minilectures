#include <iostream>

template <int N>
struct Danger {
    int a[N];
};

// incomplete types...

template <typename T, int N>
struct S {
    void f() {
        Danger<N> d;
    }
    
    void g() { // can't be template
        Danger<-1> d;
    }

    //Danger<N> dd;
};


// explicit instantiation
template struct S<int, -1>;

int main() {
    //S<int, -1> s;
    //S<int, -1>* p = nullptr;
    return 0;
}
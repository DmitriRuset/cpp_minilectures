#include <iostream>

class Complex {
public:
    Complex(double r = 0.0, double i = 0.0): real(r), imag(i)  {}

    bool operator== (const Complex& other) {
        return (this->real == other.real && this->imag == other.imag);
    }
private:
    double real;
    double imag;
};

class ExplicitComplex {
public:
    explicit ExplicitComplex(double r = 0.0, double i = 0.0): real(r), imag(i)  {}

    bool operator== (const ExplicitComplex& other) {
        return (this->real == other.real && this->imag == other.imag);
    }

private:
    double real;
    double imag;
};

int main() {

    // Here we have Same because of implicit constructor
    Complex c{3.0, 0.0};

    if (c == 3.0) {
        std::cout << "Same" << std::endl; 
    } else {
        std::cout << "Different" << std::endl;
    }

    //Here we have CE because of explicit constructor
    ExplicitComplex ec{3.0, 0.0};

    if (ec == 3.0) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }


    return 0;
}
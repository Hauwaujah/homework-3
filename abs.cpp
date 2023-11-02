#include <iostream>
#include <cmath>

// Complex class definition
class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Getter methods
    double getReal() const { return real; }
    double getImag() const { return imag; }
};

// Absolute value function
void Abs(Complex z) {
    double absValue = std::sqrt(z.getReal() * z.getReal() + z.getImag() * z.getImag());
    std::cout << "The absolute value of the complex number is: " << absValue << std::endl;
}

int main() {
    Complex z(3, -4);

    Abs(z);

    return 0;
}


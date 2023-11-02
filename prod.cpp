#include <iostream>
#include <complex>

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

    // Friend function for multiplication
    friend Complex operator*(double d, const Complex& z);
};

// Friend function definition for multiplication
Complex operator*(double d, const Complex& z) {
    double real = d * z.real;
    double imag = d * z.imag;
    return Complex(real, imag);
}

// Product function
void Product(double d, Complex z, Complex& res) {
    res = d * z;
}

int main() {
    double d = 2.5;
    Complex z(3, -4);
    Complex result;

    Product(d, z, result);

    std::cout << "The product is: " << result.getReal() << " + " << result.getImag() << "i" << std::endl;

    return 0;
}

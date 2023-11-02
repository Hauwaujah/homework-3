#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

void difference(const Complex& z1, const Complex& z2, Complex& res) {
    res = Complex(z1.real - z2.real, z1.imag - z2.imag);
}

int main() {
    Complex z1(3, 4);
    Complex z2(2, 1);
    Complex result;

    difference(z1, z2, result);

    cout << "Result: ";
    result.display();
    cout << endl;

    return 0;
}
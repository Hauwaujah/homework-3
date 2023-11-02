#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i =0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 5);
    Complex c2(2, 4);
    Complex result = c1 + c2;

    cout << "Sum of c1 and c2: ";
    result.display();
    return 0;
}
#include<iostream>
#include<cmath>
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

    double getArgument() {
        return atan2(imag, real);
    }
};

int main() {
    Complex c(3, 4);
    double argument = c.getArgument();

    cout << "Argument of c: " << argument << endl;
    return 0;
}


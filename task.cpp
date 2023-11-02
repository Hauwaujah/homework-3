#include <iostream>
#include <complex>
#include <cmath>

int main() {
    std::complex<double> z1(3, -4);
    std::complex<double> z2(-5, 2);

    std::complex<double> numerator = 2 * z1 + 3 * z2 - z1 * z2;
    std::complex<double> denominator = z1 * z2;

    std::complex<double> result = numerator / denominator;

    std::cout << "The evaluated result is: " << result << std::endl;

    return 0;
}


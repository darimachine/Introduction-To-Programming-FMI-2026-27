#include <cmath>
#include <iostream>

const double EPSILON = 0.000001;

int main() {
    double num1 = 0.1 + 0.2;
    double num2 = 0.3;

    bool equal = fabs(num1 - num2) < EPSILON;

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << std::boolalpha << equal << std::endl;

    return 0;
}

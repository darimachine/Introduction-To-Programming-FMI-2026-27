
#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    else {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }
    return result;
}

int main() {
    double base;
    int exponent;

    cin >> base >> exponent;
    cout << power(base, exponent);

    return 0;
}

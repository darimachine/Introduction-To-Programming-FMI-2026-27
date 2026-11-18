#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

int main() {
    double celsius;
    cin >> celsius;

    cout << celsiusToFahrenheit(celsius) << endl;

    return 0;
}
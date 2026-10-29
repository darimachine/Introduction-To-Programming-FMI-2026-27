#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
	F = C * 9 / 5 + 32;
	return F;
}

int main() {
	double C, F;
	cin >> C;
	cout << celsiusToFahrenheit(C);
	return 0;
}
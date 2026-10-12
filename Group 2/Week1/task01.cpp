#include <iostream>

int main() {
	double a;
	std::cout << "Enter first number: ";
	std::cin >> a;
	double b;
	std::cout << "Enter second number: ";
	std::cin >> b;
	std::cout << a << " + " << b << " = " << a + b << '\n';
	std::cout << a << " - " << b << " = " << a - b << '\n';
	std::cout << a << " * " << b << " = " << a * b << '\n';
	if (b == 0) {
		std::cout << "Error: Cannot divide by 0" << '\n';
		return 0;
	}
	std::cout << a << " / " << b << " = " << a / b << '\n';
	std::cout << a << " % " << b << " = " << (long long)a % (long long)b << '\n';
	return 0;
}

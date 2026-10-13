#include <iostream>

int main() {

	int num1, num2;

	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;

	if (num2 == 0) {
		std::cout << "Error: Cannot divide by 0" << std::endl;
	}
	else {
		std::cout << num1 << " / " << num2 << " = " << num1 * 1.0 / num2 << std::endl;
		std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
	}

}
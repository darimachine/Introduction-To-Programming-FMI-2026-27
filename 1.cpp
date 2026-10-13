
#include <iostream>

int main()
{
	std::cout << "Enter first number: ";
	int n1;
	std::cin >> n1;
	std::cout << '\n';

	std::cout << "Enter second number: ";
	int n2;
	std::cin >> n2;
	std::cout << '\n';

	std::cout << n1 << " + " << n2 << " = " << n1 + n2 << '\n';
	std::cout << n1 << " - " << n2 << " = " << n1 - n2 << '\n';
	std::cout << n1 << " * " << n2 << " = " << n1 * n2 << '\n';
	if (n2 != 0)
	{
		std::cout << n1 << " / " << n2 << " = " << static_cast<double>(n1) / n2 << '\n';
		std::cout << n1 << " % " << n2 << " = " << n1 % n2;
	}
	else std::cout << "Error: Cannot divide by 0";
}

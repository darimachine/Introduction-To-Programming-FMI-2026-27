
#include <iostream>

int main()
{
	long long N;
	std::cin >> N;

	int count = 0;
	int sum = 0;
	int reverse = 0;
	int max = 0;

	while (N > 0)
	{
		int digit = N % 10;
		count++;
		sum += digit;
		reverse = reverse * 10 + digit;
		if (max < digit) max = digit;
		N /= 10;
	}

	std::cout << "Брой цифри: " << count << "\n" << "Сбор: " << sum << "\n" << "Обърнато: " << reverse << "\n" << "Най-голяма цифра:" << max << "\n";
	return 0;
}
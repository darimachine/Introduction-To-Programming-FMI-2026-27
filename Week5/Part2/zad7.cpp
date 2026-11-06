#include <iostream>

int getLength(int number)
{
	int count = 0;
	if (number == 0)
	{
		return 1;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

int power(int base, unsigned int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

int reducingNumber(int number, int i, int j)
{
	int lenght = getLength(number);
	for (int k = 0; k < lenght - j; k++)
	{
		number /= 10;
	}
	int num = 0;
	int multiplier = 1;
	int count = j - i + 1;
	for (int k = 0; k < count; k++)
	{
		int digit = number % 10;
		num = digit * multiplier + num;
		multiplier *= 10;
		number /= 10;
	}
	return num;
}

using namespace std;
int main()
{
	int number, i, j;
	cin >> number >> i >> j;
	int num = reducingNumber(number, i, j);
	cout << num << endl;
}

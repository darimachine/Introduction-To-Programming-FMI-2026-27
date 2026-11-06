#include <iostream>

int power(int base, unsigned int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

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

int concat(unsigned int first, unsigned int second)
{
	int length = getLength(second);
	return first * power(10, length) + second;
}

using namespace std;
int main()
{
	cout << concat(123, 456) << endl;
}

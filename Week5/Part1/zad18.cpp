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


int closestPowerOfTwo(int number)
{
	int difference;
	int closestDifference = number;
	int closestPower = 0;
	for (int i = 0; i < sqrt(number) + 1; i++)
	{
		int sum = power(2, i);
		difference = abs(sum - number);
		if (difference < closestDifference)
		{
			closestDifference = difference;
			closestPower = sum;
		}
	}
	return closestPower;
}

using namespace std;
int main()
{
	cout << closestPowerOfTwo(150) << endl;
	cout << closestPowerOfTwo(1000) << endl;
}

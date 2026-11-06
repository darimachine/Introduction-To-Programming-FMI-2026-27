#include <iostream>

using namespace std;

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

void separateNumber(int number)
{
	int length = getLength(number);
	int copy = number;
	int evenNumbers = 0;
	int oddNumbers = 0;
	for(int i = 0; i < length; i++)
	{
		int num = number % 10;
		if (num % 2 == 0)
		{
			if (evenNumbers == 0)
			{
				evenNumbers = num;
			}
			else
			{
				int evenLength = getLength(evenNumbers);
				evenNumbers = num * power(10, evenLength) + evenNumbers;
			}
		}
		else
		{
			if (oddNumbers == 0)
			{
				oddNumbers = num;
			}
			else
			{
				int oddLength = getLength(oddNumbers);
				oddNumbers = num * power(10, oddLength) + oddNumbers;
			}
		}
		number /= 10;
	}
	cout << evenNumbers << " " << oddNumbers << endl;
}

int main()
{
	int number;
	cin >> number;
	separateNumber(number);
}

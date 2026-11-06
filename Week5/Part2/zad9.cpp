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


void changingNumbers(int& a, int& b, int k)
{
	for (int i = 0; i < k; i++)
	{
		int num = a % 10;
		a /= 10;
		int length = getLength(b);
		b = num * power(10, length) + b;
	}
}

using namespace std;
int main()
{
	int a, b, k;
	cin >> a >> b >> k;
	changingNumbers(a, b, k);
	cout << a << " " << b << endl;
}

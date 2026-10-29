
#include <iostream>
using namespace std;

double power(double base, int exponent)
{
	double t = base;
	if (exponent == 0) return 1;
	else if (exponent > 0)
	{
		for (int i = 1;i < exponent;i++)
		{
			base *= t;
		}
	}
	else
	{
		for (int i = exponent;i <=0;i++)
		{
			base /= t;
		}
	}
	return base;
}
int main()
{
	double base;
	int exponent;
	cin >> base >> exponent;
	cout << power(base, exponent);
	return 0;
}

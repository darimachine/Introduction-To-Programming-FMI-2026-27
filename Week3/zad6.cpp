#include <iostream>

using namespace std;
int main()
{
	double a;
	int b;
	cin >> a;
	b = a;
	if (a == b)
	{
		if (b % 2 == 0)
		{
			cout << "Even integer";
		}
		else
		{
			cout << "Odd integer";
		}
	}
	else
	{
		if (a < 0)
		{
			cout << "Negative rational";
		}
		else
		{
			cout << "Positive rational";
		}
	}
}
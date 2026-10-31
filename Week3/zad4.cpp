#include <iostream>

using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c)
	{
		cout << a << " ";
		if (b > c)
		{
			cout << c << " ";
			cout << b << " ";
		}
		else
		{
			cout << b << " ";
			cout << c << " ";
		}
	}
	else if (b < c)
	{
		cout << b << " ";
		if (a > c)
		{
			cout << c << " ";
			cout << a << " ";
		}
		else
		{
			cout << a << " ";
			cout << c << " ";
		}
	}
	else
	{
		cout << c << " ";
		if (a > b)
		{
			cout << b << " ";
			cout << a << " ";
		}
		else
		{
			cout << a << " ";
			cout << b << " ";
		}
	}
}
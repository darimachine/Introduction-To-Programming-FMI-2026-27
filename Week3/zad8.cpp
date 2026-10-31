#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int number = 0;	
	if (a > b && a > c)
	{
		if (b > c)
		{
			number = a * 100 + b * 10 + c;
		}
		else
		{
			number = a * 100 + c * 10 + b;
		}
	}
	else if (b > c)
	{
		if (a > c)
		{
			number = b * 100 + a * 10 + c;
		}
		else
		{
			number = b * 100 + c * 10 + a;
		}
	}
	else
	{
		if (a > b)
		{
			number = c * 100 + a * 10 + b;
		}
		else
		{
			number = c * 100 + b * 10 + a;
		}
	}
	cout << number;
}
#include <iostream>

using namespace std;
int main()
{
	int number;
	cin >> number;
	int firstDigit = number % 10;
	number /= 10;
	int secondDigit = number % 10;
	int thirdDigit = number / 10;
	if (firstDigit == secondDigit || firstDigit == thirdDigit)
	{
		cout << "true";
	}
	else if (secondDigit == thirdDigit)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}
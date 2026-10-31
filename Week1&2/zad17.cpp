#include <iostream>

using namespace std;
int main()
{
	double a, b;
	char operation;
	cin >> a >> operation >> b;
	if (operation == '+')
	{
		cout << a + b << endl;
	}
	else if (operation == '-')
	{
		cout << a - b << endl;
	}
	else if (operation == '*')
	{
		cout << a * b << endl;
	}
	else if (operation == '/')
	{
		if (b == 0)
		{
			cout << "Error! You can't divide by 0!" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
	}
}

#include <iostream>

bool isDigit(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

using namespace std;
int main()
{
	cout << isDigit('а') << endl;
	cout << isDigit('0') << endl;
}


#include <iostream>

char toUpper(char symbol)
{
	if (symbol >= 97 && symbol <= 122)
	{
		return symbol - 32;
	}
	else
	{
		return 0;
	}
}

char toLower(char symbol)
{
	if (symbol >= 65 && symbol <= 90)
	{
		return symbol + 32;
	}
	else
	{
		return 0;
	}
}

using namespace std;
int main()
{
	cout << toUpper('a') << endl;
	cout << toLower('A') << endl;
}

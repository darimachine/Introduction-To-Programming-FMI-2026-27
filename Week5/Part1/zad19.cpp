#include <iostream>

bool isDivisableByValue(int number, int value)
{
	int result = number / value;
	if (result * value == number)
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
	cout << isDivisableByValue(6, 3) << endl;
	cout << isDivisableByValue(14, 5) << endl;
}

#include <iostream>

int absoluteValue(int number)
{
	if (number < 0)
	{
		return -number;
	}
	else
	{
		return number;
	}
}

using namespace std;
int main()
{
	cout << absoluteValue(-7) << endl;
	cout << absoluteValue(12) << endl;
}

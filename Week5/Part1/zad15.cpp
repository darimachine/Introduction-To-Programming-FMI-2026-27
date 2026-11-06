#include <iostream>

bool isSquareRoot(int number)
{
	if (number <= 0)
	{
		return 0;
	}
	int root = 1;
	while (root * root <= number)
	{
		if (root * root == number)
		{
			return true;
		}
		root++;
	}
	return false;
}

using namespace std;
int main()
{
	cout << isSquareRoot(24) << endl;
	cout << isSquareRoot(25) << endl;
}


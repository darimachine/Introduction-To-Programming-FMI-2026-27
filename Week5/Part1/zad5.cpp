#include <iostream>

int power(int base, unsigned int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

using namespace std;
int main()
{
	cout << power(5, 2) << endl;
}

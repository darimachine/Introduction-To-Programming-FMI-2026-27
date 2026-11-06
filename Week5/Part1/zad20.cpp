#include <iostream>

int getRemainder(int number, int value)
{
	int counter = 0;
	while (number >= value)
	{
		number -= value;
		counter++;
	}
	return counter;
}

using namespace std;
int main()
{
	cout << getRemainder(30, 7) << endl;
}

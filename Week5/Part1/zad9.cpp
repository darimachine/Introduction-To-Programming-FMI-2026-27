#include <iostream>

int getLength(int number)
{
	int count = 0;
	if (number == 0)
	{
		return 1;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

using namespace std;
int main()
{
	cout << getLength(123) << endl;
	cout << getLength(0) << endl;
}
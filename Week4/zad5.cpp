#include <iostream>

using namespace std;
int main()
{
	int count = 0;
	int min = 0;
	while (count < 3)
	{
		int number;
		cin >> number;
		if (number < 0)
		{
			if (min > number)
			{
				min = number;
			}
			count++;
		}
		else
		{
			min = 0;
			count = 0;
		}
	}
	cout << min << endl;
}

#include <iostream>

using namespace std;
int main()
{
	int count;
	cin >> count;
	int max = 0;
	for (int i = 0; i < count; i++)
	{
		int number;
		cin >> number;
		if (number > max)
		{
			max = number;
		}
	}
	cout << max << endl;
}


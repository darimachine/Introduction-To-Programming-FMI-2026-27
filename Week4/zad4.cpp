#include <iostream>

using namespace std;
int main()
{
	int count = 0;
	int sum = 0;
	while (count < 5)
	{
		int number;
		cin >> number;
		if (number > 0)
		{
			sum += number;
			count++;
		}
	}
	cout << sum << endl;
}

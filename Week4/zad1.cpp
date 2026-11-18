
#include <iostream>

using namespace std;
int main()
{
	int count = 0;
	cin >> count;
	int sum = 0;
	while (count > 0)
	{
		int number;
		cin >> number;
		sum += number;
		count--;
	}
	cout << sum << endl;
}


#include <iostream>

int getLength(long long number)
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

int sum(long long number)
{
	while (getLength(number) > 1)
	{
		int subSum = 0;
		while (number > 0)
		{
			subSum += number % 10;
			number /= 10;
		}
		number = subSum;
	}
	return number;
}

using namespace std;
int main()
{
	long long number;
	cin >> number;
	cout << sum(number) << endl;
}


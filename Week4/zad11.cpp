#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int sum = 0;
		int num = i;
		while (num > 0)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum % 2 == 0)
		{
			cout << i << " ";
		}
	}
}


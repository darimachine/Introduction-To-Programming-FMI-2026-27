#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	int sum = 0;
	int number = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			sum = k;
		}
		else
		{
			int j = 0;
			while (j < i)
			{
				number += k * pow(10, j);
				j++;
			}
			sum += number;
		}
		number = 0;
	}
	cout << sum << endl;
}

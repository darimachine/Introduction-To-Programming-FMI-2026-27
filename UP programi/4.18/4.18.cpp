#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int j = 0; j < 4 + (n * 2) - (i * 2) + (n * 2 - i * 2); j++)
		{
			if(i == n)
			{
				cout << "-";
			}
			else
			{
				cout << " ";
			}

		}
		for (int j = i; j > 0; j--)
		{
			cout << " " << j;
		}
		cout << endl;
	}

	for (int i = n - 1; i > 0; i--)
	{
		
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int j = 0; j < 4 + (n * 2) - (i * 2) + (n * 2 - i * 2); j++)
		{
			cout << " ";
		}
		for (int j = i; j > 0; j--)
		{
			cout << " " << j;
		}
		cout << endl;
	}




}


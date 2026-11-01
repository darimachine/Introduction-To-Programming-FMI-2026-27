#include <iostream>
using namespace std;

int main()
{
    int n;
	char ch;
    cin >> n >> ch;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i + 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (i * 2) + 1; j++)
		{
			cout << ch;
		}
		cout << endl;
	}

	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < n - i + 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (i * 2) + 1; j++)
		{
			cout << ch;
		}
		cout << endl;
	}
}


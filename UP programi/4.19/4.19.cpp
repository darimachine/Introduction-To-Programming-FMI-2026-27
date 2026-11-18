
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
		for (int j = 2; j <= n; j++)
		{
			if (j % 2 == 0)
			{
				cout << (n * j) - i + 1 << " ";
			}
			else 
			{
				cout << (n * j) - n + i << " ";
			}
		}
		cout << endl;
	}
}


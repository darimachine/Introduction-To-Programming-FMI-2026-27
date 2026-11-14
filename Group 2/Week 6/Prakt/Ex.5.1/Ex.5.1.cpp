#include <iostream>

using namespace std;

const int MAX_ROW_SIZE = 25;
const int MAX_COLUMN_SIZE = 25;

int main()
{
	int n;
	int m;
	int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> numbers[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i % 2 == 0) cout << numbers[i][j] << " ";
			else cout << numbers[i][m - j - 1] << " ";
		}
	}
}


#include <iostream>

using namespace std;

const int MAX_ROW_SIZE = 25;
const int MAX_COLUMN_SIZE = 25;


void solution_5_1();
void solution_5_2();

int main()
{


	solution_5_1();
	
}

void solution_5_1()
{
	int n;
	int m;

	cin >> n;
	cin >> m;

	int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

	if (n < 1 || m > 25) return;

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

void solution_5_2()
{

}
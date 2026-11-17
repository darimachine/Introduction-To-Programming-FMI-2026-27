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

	int top = 0;
	int bottom = n - 1;
	int left = 0; 
	int right = m - 1;

	while (top <= bottom && left <= right) {
		for (int j = left; j <= right; j++) {
			cout << numbers[top][j] << " ";
		}
		top++;

		for (int i = top; i <= bottom; i++) {
			cout << numbers[i][right] << " ";
		}
		right--;

		if (top <= bottom) {
			for (int j = right; j >= left; j--) {
				cout << numbers[bottom][j] << " ";
			}
			bottom--;
		}

		if (left <= right) {
			for (int i = bottom; i >= top; i--) {
				cout << numbers[i][left] << " ";
			}
			left++;
		}
	}
}
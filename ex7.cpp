#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N < 1 || N > 39 || N % 2 == 0) {
		cout << "Invalid input";
		return 1;
	}

	int halfN = N / 2;
	for (int i = halfN; i >= - halfN; i--)
	{
		int spaces = i > 0 ? i : -1 * i;
		for (int j = 0; j < spaces; j++)
		{
			cout << ' ';
		}
		int stars = N - 2 * spaces;
		for (int j = 0; j < stars; j++)
		{
			cout << '*';
		}
		cout << "\n";
	}
}

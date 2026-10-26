#include <iostream>
using namespace std;
int main()
{
	int N, finalNum = 0, maxSteps = 0, steps = 0;
	cin >> N;
	for (int i = 1;i < N;i++)
	{
		int a = i;
		while (a != 1)
		{
			if (a % 2 == 0)
			{
				a /= 2; steps++;
			}
			else
			{
				a = 3 * a + 1;
				steps++;
			}
		}
		if (maxSteps < steps)
		{
			maxSteps = steps;
			finalNum = i;
		}
		if (maxSteps == steps)
		{
			if (finalNum > i)
			{
				finalNum = i;
			}
		}
		steps = 0;
	}
	cout << finalNum << " " << maxSteps;
	return 0;
}


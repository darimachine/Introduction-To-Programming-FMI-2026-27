#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
	int numLongestSequence = 1;
	int maxSteps = 0;

	for (int i = 1; i <= x; i++)
	{
		long long currentNum = i;
		int currentSteps = 0;
		while (currentNum > 1)
		{
			if (currentNum % 2 == 0) {
				currentNum /= 2;
			}
			else
			{
				currentNum = currentNum * 3 + 1;
			}

			currentSteps++;
		}
		if (currentSteps > maxSteps)
		{
			maxSteps = currentSteps;
			numLongestSequence = i;
		}
	}

	cout << numLongestSequence << " " << maxSteps;
}

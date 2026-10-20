#include <iostream>
using namespace std;

int main()
{
	int num;
	long long maxSteps = 0;
	long long numberWithMaxSteps = 0;

	cin >> num;
	for (int i = 1; i <= num; i++) {
		long long current = i;
		long long steps = 0;

		while (current != 1) {

			if (current % 2 == 0) {
				current = current / 2;

			}
			else {
				current = 3 * current + 1;
			}
			steps++;
		}
		if (steps > maxSteps) {
			numberWithMaxSteps = i;
			maxSteps = steps;
		}
	}
	cout << numberWithMaxSteps << endl;
	cout << maxSteps << endl;

	return 0;
}

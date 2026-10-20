#include <iostream>

using namespace std;

int main() {

	long long n;
	cin >> n;

	int longest = 0;
	int num = 0;
	

	for (long long x = n; x >= 1; x--) {

		long long y = x;
		int stepsCount = 0;

		while (y != 1) {
			if (y % 2 == 0) {
				y = y / 2;
			}
			else {
				y = 3 * y + 1;
			}
			stepsCount++;

		}

		if (stepsCount >= longest) {
			longest = stepsCount;
			num = x;
		}

	}

	cout << longest << " " << num << endl;
}
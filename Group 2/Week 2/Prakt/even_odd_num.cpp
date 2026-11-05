#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	if (num > 0) {
		cout << "Positive" << endl;
	}
	else {
		if (num < 0) {
			cout << "Negative" << endl;
		}
		else {
			cout << "Zero" << endl;
		}
	}

	if (num % 2 == 0) {
		cout << "Even" << endl;
	}
	else {
		cout << "Odd" << endl;
	}

	return 0;
}
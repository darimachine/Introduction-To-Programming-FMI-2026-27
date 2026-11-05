#include <iostream>
using namespace std;

bool isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	return false;
}

int main() {
	int year;
	cin >> year;

	if (isLeapYear(year)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
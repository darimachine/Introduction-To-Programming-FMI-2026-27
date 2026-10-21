#include <iostream>
using namespace std;

int main()
{

	int numerator1, denominator1, numerator2, denominator2;
	char slash;

	cin >> numerator1 >> slash >> denominator1 >> numerator2 >> slash >> denominator2;

	int numerator = numerator1 * denominator2 + numerator2 * denominator1;
	int denominator = denominator1 * denominator2;

	int a = numerator;
	int b = denominator;

    while (b != 0) {
        int remain = b;
        b = a % b;
        a = remain;
    }
	int newNumerator = numerator / a;
	int newDenominator = denominator / a;

	if (newDenominator == 1) {
		cout << newNumerator << endl;
	}
	else if (newNumerator == 0) {
		cout << 0 << endl;
	}
	else if (newDenominator < 0) {
		cout << -newNumerator << "/" << -newDenominator << endl;
	}
	else {
		cout << newNumerator << "/" << newDenominator << endl;
	}
    return 0;
}


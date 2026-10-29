#include <iostream>
using namespace std;

long long decimalToBinary(long long number) {

	long long binary = 0;
	long long position = 1;

	while (number != 0) {

		int remainder = number % 2;
		binary += position * remainder;
		position *= 10;

		number /= 2;
	}
	return binary;
}
long long binaryToDecimal(long long number) {
	long long decimal = 0;
	long long currentPowerOfTwo = 1;

	while (number != 0) {
		int lastDigit = number % 10;

		if (lastDigit == 1) {
		decimal += currentPowerOfTwo;
		}

		currentPowerOfTwo *= 2;
		number /= 10;
	}
	return decimal;
}

int main() {

	char symbol;
	long long number;

	cin >> symbol >> number;

	switch (symbol) {
		case 'b':
			cout << decimalToBinary(number) << endl;
			break;
	case 'd':
			cout << binaryToDecimal(number) << endl;
			break;
	}
	return 0;
}
#include <iostream>

using namespace std;
int main()
{
	int number;
	cin >> number;
	int firstDigit = number % 10;
	number /= 10;
	int secondDigit = number % 10;
	number /= 10;
	int thirdDigit = number % 10;
	int fourthDigit = number / 10;
	int sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
	int product = firstDigit * secondDigit * thirdDigit * fourthDigit;
	int average = sum / 4;
	cout << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Average: " << average << endl;
}


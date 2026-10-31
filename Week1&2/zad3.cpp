#include <iostream>
#include <string>

using namespace std;
int main()
{
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	cin >> num2;
	int firstDigits = num1 % 100;
	int secondDigits = num2 % 100;
	string firtsDigitsAsString = to_string(firstDigits);
	string secondDigitsAsString = to_string(secondDigits);
	cout <<firtsDigitsAsString + secondDigitsAsString<< endl;
}
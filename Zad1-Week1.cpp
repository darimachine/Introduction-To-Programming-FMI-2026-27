//1 zad
#include <iostream>
using namespace std;	
int main() {
	int num1;
	int num2;
	cout << "Enter first number:" ;
	cin >> num1;
	cout << "Enter second number:" ;
	cin >> num2;
	
	int sum = num1 + num2;
	int diff = num1 - num2;
	int mult = num1 * num2;
	
	cout << num1 << "+" << num2 << "=" << sum << endl;
	cout << num1 << "-" << num2 << "=" << diff << endl;
	cout << num1 << "*" << num2 << "=" << mult << endl;
	
	if ( num2 != 0) {
		int dev = num1 / num2;
		int ost = num1 % num2;
		cout << num1 << "/" << num2 << "=" << dev << endl;
		cout << num1 << "%" << num2 << "=" << ost << endl;
	}
	else {
		cout << "Error: Cannot divide by 0 ";
	}

	
	
	
}
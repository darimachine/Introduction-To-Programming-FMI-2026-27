#include <iostream>

using namespace std;
int main()
{
	string inputWord;
	double num1;
	double num2;
	cin >> inputWord >> num1;
	cin >> inputWord >> num2;
	double copy = num2;
	num2 = num1;
	num1 = copy;
	cout << "A: " << num1 << endl;
	cout << "B: " << num2 << endl;
}
#include <iostream>

using namespace std;
int main()
{
	string number; 
	cin >> number;
	for (size_t i = 0; i < 12; i++)
	{
		number[i] = 'X';
	}
	cout << number << endl;
}

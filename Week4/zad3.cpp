#include <iostream>

using namespace std;
int main()
{
	int number;
	cin >> number;
	int factoriel = 1;;
	for (int i = number; i > 0; i--)
	{
		factoriel *= i;
	}
	cout << factoriel << endl;
}


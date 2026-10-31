#include <iostream>

using namespace std;
int main()
{
	char letter1;
	char letter2;
	char letter3;
	cin >> letter1 >> letter2 >> letter3;
	int sum = letter1 + letter2 + letter3;
	if (sum % 2 == 0)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
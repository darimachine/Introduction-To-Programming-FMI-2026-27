#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}


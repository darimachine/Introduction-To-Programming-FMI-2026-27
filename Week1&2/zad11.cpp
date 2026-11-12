#include <iostream>

using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((c < a && c > a) && (d < a && d > a))
	{
		cout << 0 << endl;
	}
	else if ((c > a && c < b) || (d > a && d < b))
	{
		cout << 1 << endl;
	}
	else if ((c > a && c < b) && (d > a && d < b))
	{
		cout << 2 << endl;
	}
}


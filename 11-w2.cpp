
#include <iostream>
using namespace std;

int main()
{
    int x;
	long long reverse = 0;
    cin >> x;
	int t = x;
	while (t > 0)
	{
		int digit = t % 10;
		reverse = reverse * 10 + digit;
		t /= 10;
	}
	if (reverse == x)
		cout << "true";
	else cout << "false";
	return 0;
}

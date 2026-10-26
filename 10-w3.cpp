
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
	if (n <= 0) return false;
	if (n == 1) return true;
	else if (n % 2 == 0) return isPowerOfTwo(n / 2);
	else return false;
}

int main()
{
	int n;
	cin >> n;
	if (isPowerOfTwo(n) == 1) cout << "true";
	else cout << "false";
	return 0;
}

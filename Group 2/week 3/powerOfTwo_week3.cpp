
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 2 != 0) return false;

    return isPowerOfTwo(n / 2);
}
int main()
{
	int n;
	cin >> n;
    cout << boolalpha << isPowerOfTwo(n);

    return 0;
}


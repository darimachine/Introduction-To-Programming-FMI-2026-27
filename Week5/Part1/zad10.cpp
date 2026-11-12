#include <iostream>

int log(int n, int k)
{
	int count = 0;
	while (n >= k)
	{
		n /= k;
		count++;
	}
	return count;
}

using namespace std;
int main()
{
    cout << log(90, 3) << endl;
}


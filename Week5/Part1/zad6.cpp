#include <iostream>

int gcd(int first, int second)
{
	int biggest = 1;
	while(second != 0)
	{
		int num = first % second;
		first = second;
		second = num;
	}
	return first;
}

using namespace std;
int main()
{
	cout << gcd(15, 25) << endl;
}


#include <iostream>

int gcd(int first, int second)
{
	int biggest = 1;
	while (second != 0)
	{
		int num = first % second;
		first = second;
		second = num;
	}
	return first;
}

int lcm(int first, int second)
{
	if (first == 0 || second == 0) {
		return 0;
	}
	return (abs(first) / gcd(first, second)) * abs(second);
}


using namespace std;
int main()
{
	int n;
	cin >> n;
	int num;
	cin >> num;
	int gcdResult = num;
	int lcmResult = num;
	for (int i = 0; i < n - 1; i++)
	{
		int number;
		cin >> number;
		gcdResult = gcd(gcdResult, number);
		lcmResult = lcm(lcmResult, number);
	}
	cout << gcdResult << endl;
	cout << lcmResult << endl;
}

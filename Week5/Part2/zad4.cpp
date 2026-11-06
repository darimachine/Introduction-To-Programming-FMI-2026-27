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

void reducingFractions(int& nominator, int& denominator)
{
	int number = gcd(nominator, denominator);
	nominator /= number;
	denominator /= number;
}

using namespace std;
int main()
{
	int nominator, denominator;
	cin >> nominator >> denominator;
	reducingFractions(nominator, denominator);
	cout << nominator << " " << denominator << endl;
}


#include <iostream>

using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	double sum = a + b;
	double difference = a - b;
	double product = a * b;
	double quotient = a / b;
	double biggest = 0;
	if (sum > difference && sum > product && sum > quotient)
	{
		biggest = sum;
	}
	else if (difference > sum && difference > product && difference > quotient)
	{
		biggest = difference;
	}
	else if (product > sum && product > difference && product > quotient)
	{
		biggest = product;
	}
	else
	{
		biggest = quotient;
	}
	cout << biggest << endl;
}
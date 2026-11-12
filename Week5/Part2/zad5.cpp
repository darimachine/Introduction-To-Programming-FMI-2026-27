#include <iostream>

int getLength(int number)
{
	int count = 0;
	if (number == 0)
	{
		return 1;
	}
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

int getDigitOnPosition(int number, unsigned int position)
{
	if (position > 0)
	{
		int pos = getLength(number) - position;
		int num;
		for (int i = 0; i <= pos; i++)
		{
			if (i == pos)
			{
				return number % 10;
			}
			else
			{
				number /= 10;
			}
		}
	}
	else
	{
		return 0;
	}
}

void swapDigits(int& n, int& m, int k)
{
	int numN = getDigitOnPosition(n, k);
	int numM = getDigitOnPosition(m, k);
	int posN = getLength(n) - k;
	int posM = getLength(m) - k;
	int multN = 1;
	for (int i = 0; i < posN; i++) 
	{
		multN *= 10;
	}
	int multM = 1;
	for (int i = 0; i < posM; i++) 
	{
		multM *= 10;
	}
	n = n - (numN * multN) + (numM * multN);
	m = m - (numM * multM) + (numN * multM);
}

using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	swapDigits(n, m, k);
	cout << n << " " << m << endl;
}


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

using namespace std;
int main()
{
	cout << getDigitOnPosition(6289, 3) << endl;
}



#include <iostream>
using namespace std;

int days(int day, int month, int yr)
{
	int count = 0;
	for (int i = 1900;i < yr;i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			count += 366;
		}
		else count += 365;
	}
	for (int i = 1;i < month;i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) count += 31;
		else if (i != 2) count += 30;
		else if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
		{
			count += 29;
		}
		else count += 28;
	}
	count += day;
	return count;
}

int difference(int day1, int month1, int yr1, int day2, int month2, int yr2)
{
	return days(day2, month2, yr2) - days(day1, month1, yr1);
}

int main()
{
	int day1, month1, yr1, day2, month2, yr2;
	cin >> day1 >> month1 >> yr1;
	cin >> day2 >> month2 >> yr2;
	cout << difference(day1, month1, yr1, day2, month2, yr2);
	return 0;
}

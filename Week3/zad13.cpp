#include <iostream>

bool LeapYear(int year)
{
	if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

using namespace std;
int main()
{
	int day;
	int month;
	int year;
	cin >> day >> month >> year;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day == 31)
		{
			day = 1;
			month++;
			if (month == 13)
			{
				year++;
			}
		}
		else
		{
			day++;
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 30)
		{
			day = 1;
			month++;
		}
		else
		{
			day++;
		}
	}
	else
	{
		if (LeapYear(year) == true)
		{
			if (month == 2 && day == 29)
			{
				day = 1;
				month++;
			}
		}
		else
		{
			if (month == 2 && day == 28)
			{
				day = 1;
				month++;
			}
			else
			{
				day++;
			}
		}
	}
	cout << day << " " << month << " " << year;
}


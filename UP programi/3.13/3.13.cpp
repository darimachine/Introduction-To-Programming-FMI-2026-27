#include <iostream>

using namespace std;

int main()
{
	int day;
	int month;
	int year;
	cin >> day >> month >> year;

	switch (month) 
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	{
		day++;
		if (day > 31) 
		{
			day = 1;
			month++;
		}

		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		day++;
		if (day > 30)
		{
			day = 1;
			month++;
		}

		break;
	}
	case 2:
	{
		day++;
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
		{
			if (day > 29) 
			{
				day = 1;
				month++;
			}
		}
		else 
		{
			if (day > 28)
			{
				day = 1;
				month++;
			}
		}
		break;
	}
	case 12:
	{
		day++;
		if (day > 31)
		{
			day = 1;
			month = 1;
			year++;
		}

		break;
	}		
	}

	cout << day << " " << month<< " " << year;

}



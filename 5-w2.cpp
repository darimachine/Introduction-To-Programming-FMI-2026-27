
#include <iostream>
using namespace std;

int main()
{
	int day, month, year;
	bool dateExists;
	cin >> day >> month >> year;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		if (day >= 1 && day <= 31) dateExists = true;
		else dateExists = false;
	else if (month <= 11 && month != 2)
		if (day >= 1 && day <= 30) dateExists=true;
		else dateExists=false;
	else if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			if (day >= 1 && day <= 29) dateExists=true;
			else dateExists=false;
		else if (day >= 1 && day <= 28) dateExists=true;
		else dateExists=false;
	}
	if (dateExists == true)
	{
		cout << "Валидна" << "\n";
		switch (month)
		{
		case 1:cout << "Януари";break;
		case 2:cout << "Февруари";break;
		case 3:cout << "Март";break;
		case 4:cout << "Април";break;
		case 5:cout << "Май";break;
		case 6:cout << "Юни";break;
		case 7:cout << "Юли";break;
		case 8:cout << "Август";break;
		case 9:cout << "Септември";break;
		case 10:cout << "Октомври";break;
		case 11:cout << "Ноември";break;
		case 12:cout << "Декември";break;
		}
	}
	else cout << "Невалидна";
	return 0;
}


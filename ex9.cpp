#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int day, month, year, k;
    cin >> day >> month >> year >> k;

    const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    day += k;

    while (true)
    {
        int currentMonthDays = daysInMonth[month - 1];

        if (month == 2 && isLeapYear(year))
        {
            currentMonthDays = 29;
        }

        if (day <= currentMonthDays)
        {
            break;
        }

        day -= currentMonthDays;
        month++;

        if (month > 12)
        {
            month = 1;
            year++;
        }
    }

    cout << (day < 10 ? "0" : "") << day << "."
        << (month < 10 ? "0" : "") << month << "."
        << year << '\n';
}

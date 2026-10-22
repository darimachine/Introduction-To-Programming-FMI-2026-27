#include <iostream>
using namespace std;

bool isLeapYear(int year);

int main()
{
    int day, month, year, K;
    cin >> day >> month >> year >> K;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    while (K > 0)
    {
        int days = daysInMonth[month - 1];

        if (month == 2 && isLeapYear(year))
            days = 29;

        int remainingDays = days - day;

        if (K <= remainingDays)
        {
            day += K;
            K = 0;
        }
        else
        {
            K -= remainingDays + 1;
            day = 1;
            month++;

            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
    }

    if (day < 10)
        cout << "0";
    cout << day << ".";

    if (month < 10)
        cout << "0";
    cout << month << ".";

    cout << year << endl;

    return 0;
}

bool isLeapYear(int year)
{
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}
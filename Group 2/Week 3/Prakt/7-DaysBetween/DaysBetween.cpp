#include <iostream>

using namespace std;

int dayOfYear(int dayDate, int month, int year);
bool isLeapYear(int year);
bool is31Days(int month);

int dayOfYear(int dayDate, int month, int year)
{
    int day = 0;

    for (int i = 1; i < month; i++)
    {
        if (i == 2)
        {
            day += 28;

            if (isLeapYear(year))
            {
                day++;
            }
        }
        else if (is31Days(i))
        {
            day += 31;
        }
        else
        {
            day += 30;
        }
    }

    return dayDate + day;
}

bool is31Days(int month)
{
    return (month <= 7 && month % 2 != 0) || (month > 7 && month % 2 == 0);
}

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() 
{
    int startDay = 0;
    int startMonth = 0;
    int startYear = 0;
    int endDay = 0;
    int endMonth = 0;
    int endYear = 0;

    cin >> startDay >> startMonth >> startYear;
    cin >> endDay >> endMonth >> endYear;

    int difference = dayOfYear(endDay, endMonth, endYear) - dayOfYear(startDay, startMonth, startYear);

    for (int i = startYear; i < endYear; i++)
    {
        difference += isLeapYear(i) ? 366 : 365;
    }
    
    cout << difference;

    return 0;
}
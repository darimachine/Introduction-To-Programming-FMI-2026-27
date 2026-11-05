#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }

    return 31;
}

int getDaysBetween(int firstDay, int firstMonth, int firstYear, int secondDay, int secondMonth, int secondYear)
{
    int daysBetween = - firstDay + secondDay;
    while (firstYear < secondYear || (firstYear == secondYear && firstMonth < secondMonth))
    {
        daysBetween += getDaysInMonth(firstMonth, firstYear);
        firstMonth++;
        if (firstMonth > 12)
        {
            firstMonth = 1;
            firstYear++;
        }
    }
    return daysBetween;
}

bool isInputValid(int firstDay, int firstMonth, int firstYear, int secondDay, int secondMonth, int secondYear)
{
    if (firstYear < 1900 || firstYear > 2100 || secondYear < 1900 || secondYear > 2100 || firstYear > secondYear)
    {
        return false;
    }

    if (firstMonth < 1 || firstMonth > 12 || secondMonth < 1 || secondMonth > 12)
    {
        return false;
    }

    if (firstDay < 1 || firstDay > getDaysInMonth(firstMonth, firstYear) || secondDay < 1 || secondDay > getDaysInMonth(secondMonth, secondYear))
    {
        return false;
    }

    if (firstYear == secondYear)
    {
        if (firstMonth > secondMonth || (firstMonth == secondMonth && firstDay > secondDay))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int firstDay, firstMonth, firstYear;
    int secondDay, secondMonth, secondYear;

    cin >> firstDay >> firstMonth >> firstYear;
    cin >> secondDay >> secondMonth >> secondYear;

    if (!isInputValid(firstDay, firstMonth, firstYear, secondDay, secondMonth, secondYear))
    {
        cout << "invalid input";
        return 1;
    }

    cout << getDaysBetween(firstDay, firstMonth, firstYear, secondDay, secondMonth, secondYear);
    return 0;
}

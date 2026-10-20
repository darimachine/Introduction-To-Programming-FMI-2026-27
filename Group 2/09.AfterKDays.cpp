#include <iostream>
using namespace std;

int main()
{
    int day, month, year, k;
    cin >> day >> month >> year >> k;

    day += k;

    while (true) {
        int daysInMonth;

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) ||
                year % 400 == 0) {
                daysInMonth = 29;
            }
            else {
                daysInMonth = 28;
            }
        }
        else if (month == 4 || month == 6 ||
            month == 9 || month == 11) {
            daysInMonth = 30;
        }
        else {
            daysInMonth = 31;
        }

        if (day <= daysInMonth) {
            break;
        }

        day -= daysInMonth;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    cout << day << ": " << month << ": " << year << endl;

    return 0;
}
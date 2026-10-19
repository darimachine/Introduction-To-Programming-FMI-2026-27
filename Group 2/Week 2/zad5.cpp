#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // CLion терминала ми нещо не се кефише на кирилицата

    int day = 0;
    int month = 0;
    int year = 0;

    cin >> day >> month >> year;

    bool isValid = false;
    string monthName = "";

    switch (month) {
        case 1: isValid = (day > 0 && day <= 31); monthName = "Януари"; break;
        case 2:

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                isValid = (day > 0 && day <= 29);
            } else {
                isValid = (day > 0 && day <= 28);
            }
            monthName = "Февруари";
            break;
        case 3: isValid = (day > 0 && day <= 31); monthName = "Март"; break;
        case 4: isValid = (day > 0 && day <= 30); monthName = "Април"; break;
        case 5: isValid = (day > 0 && day <= 31); monthName = "Май"; break;
        case 6: isValid = (day > 0 && day <= 30); monthName = "Юни"; break;
        case 7: isValid = (day > 0 && day <= 31); monthName = "Юли"; break;
        case 8: isValid = (day > 0 && day <= 31); monthName = "Август"; break;
        case 9: isValid = (day > 0 && day <= 30); monthName = "Септември"; break;
        case 10: isValid = (day > 0 && day <= 31); monthName = "Октомври"; break;
        case 11: isValid = (day > 0 && day <= 30); monthName = "Ноември"; break;
        case 12: isValid = (day > 0 && day <= 31); monthName = "Декември"; break;
        default: isValid = false; break;
    }

    if (isValid) {
        cout << "Валидна" << endl;
        cout << monthName << endl;
    } else {
        cout << "Невалидна" << endl;
    }

    return 0;
}
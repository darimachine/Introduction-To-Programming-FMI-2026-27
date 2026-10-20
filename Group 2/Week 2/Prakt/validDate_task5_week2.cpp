#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    int maxOfDays = 0;
    cin >> day >> month >> year;
    //
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    maxOfDays = 31;
    break;
    //
    case 4:
    case 6:
    case 9:
    case 11:
     maxOfDays = 30;
     break;

    case 2:
        if ((year % 4==0 && year % 100 != 0) || year % 400 == 0) {
            maxOfDays = 29;
        }
        else {
            maxOfDays = 28;
        }
        break;

    default:
        maxOfDays = 0;
        break;
    }

    if (year > 0 && day >= 1 && day <= maxOfDays) {
        cout << "Valid" << endl;
        switch (month) {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        }
    }
    else {
        cout << "Invalid" << endl;
    }
    return 0;
    //"изведете и името на месеца на български" не знам защо конзолата не показва правилно кирилицатаа
}
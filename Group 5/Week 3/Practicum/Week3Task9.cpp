#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    //split into digits
    int firstDigit = number / 10;
    int secondDigit = number % 10;

    //single-digit numbers
    if (firstDigit == 0) {
        switch (secondDigit) {
        case 0:
            cout << "zero" << endl; break;
        case 1:
            cout << "one" << endl; break;
        case 2:
            cout << "two" << endl; break;
        case 3:
            cout << "three" << endl; break;
        case 4:
            cout << "four" << endl; break;
        case 5:
            cout << "five" << endl; break;
        case 6:
            cout << "six" << endl; break;
        case 7:
            cout << "seven" << endl; break;
        case 8:
            cout << "eight" << endl; break;
        case 9:
            cout << "nine" << endl; break;
        }
        return 0;
    }

    //numbers 10-19
    if (firstDigit == 1) {
        switch (secondDigit) {
        case 0:
            cout << "ten" << endl; break;
        case 1:
            cout << "eleven" << endl; break;
        case 2:
            cout << "twelve" << endl; break;
        case 3:
            cout << "thirteen" << endl; break;
        case 4:
            cout << "fourteen" << endl; break;
        case 5:
            cout << "fifteen" << endl; break;
        case 6:
            cout << "sixteen" << endl; break;
        case 7:
            cout << "seventeen" << endl; break;
        case 8:
            cout << "eighteen" << endl; break;
        case 9:
            cout << "nineteen" << endl; break;
        }
        return 0;
    }
    else {
        //every other double-digit number
        switch (firstDigit) {
        case 2:
            cout << "twenty "; break;
        case 3:
            cout << "thirty "; break;
        case 4:
            cout << "fourty "; break;
        case 5:
            cout << "fifty "; break;
        case 6:
            cout << "sixty "; break;
        case 7:
            cout << "seventy "; break;
        case 8:
            cout << "eighty "; break;
        case 9:
            cout << "ninety "; break;
        }
        switch (secondDigit) {
        case 0:
            break;
        case 1:
            cout << "one" << endl; break;
        case 2:
            cout << "two" << endl; break;
        case 3:
            cout << "three" << endl; break;
        case 4:
            cout << "four" << endl; break;
        case 5:
            cout << "five" << endl; break;
        case 6:
            cout << "six" << endl; break;
        case 7:
            cout << "seven" << endl; break;
        case 8:
            cout << "eight" << endl; break;
        case 9:
            cout << "nine" << endl; break;
        }
        return 0;
    }
}
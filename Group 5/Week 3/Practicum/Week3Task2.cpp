#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    double biggestNum = num1;
    if (num2 > biggestNum) {
        biggestNum = num2;
    }
    if (num3 > biggestNum) {
        biggestNum = num3;
    }

    cout << biggestNum << endl;
}
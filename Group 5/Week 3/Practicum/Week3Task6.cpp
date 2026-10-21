#include <iostream>
using namespace std;

double myAbs(double x) {
    return (x > 0) ? x : -x;
}

int main()
{
    double inputNum;
    cin >> inputNum;

    int intNum = inputNum;
    bool isInteger = (myAbs(inputNum - (double)intNum) < 0.00001);

    if (isInteger) {
        if (intNum % 2 == 0) {
            cout << "Even integer" << endl;
        }
        else {
            cout << "Odd integer" << endl;
        }
    }
    else {
        if (inputNum > 0) {
            cout << "Positive rational" << endl;
        }
        else {
            cout << "Negative rational" << endl;
        }
    }
}
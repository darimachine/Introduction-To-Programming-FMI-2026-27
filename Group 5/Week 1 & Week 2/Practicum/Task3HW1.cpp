// Task3HW1.cpp : Merge the last two digits of two numbers into one number
//

#include <iostream>
using namespace std;

int main()
{
    int inputNum1;
    cin >> inputNum1;
    
    int inputNum2;
    cin >> inputNum2;

    int outputNum = (inputNum1 % 100) * 100 + (inputNum2 % 100);
    cout << outputNum << endl;
}
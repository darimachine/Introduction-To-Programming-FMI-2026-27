#include <iostream>
using namespace std;

int main() {
    double num1 = 0;
    double num2 = 0;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
    }
    else cout << "Division by zero is not allowed!" << endl;


    return 0;

}
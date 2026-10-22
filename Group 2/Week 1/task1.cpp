
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    int subtr = num1 - num2; 
    int multiplication = num1 * num2;

    cout << num1 << " + " << num2 << " = " << sum << "\n";
    cout << num1 << " - " << num2 << " = "  << subtr << "\n";
    cout << num1 << " * " << num2 << " = " << multiplication <<  "\n";

    if (num2 == 0)
    {
        cout << "Error: cannot divide by 0" "\n";
    }
    else
    {
        double quotient = (double)num1 / num2;
        int remainder = num1 % num2;
        cout << num1 << " / " << num2 << " = " << quotient << "\n";
        cout << num1 << " % " << num2 << " = " << remainder << " \n";
    }

}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 < num2) swap(num1, num2);

    int maxOutput = 0;

    if ((num1 + num2) > maxOutput) maxOutput = num1 + num2;
    if ((num1 - num2) > maxOutput) maxOutput = num1 - num2;
    if ((num1 / num2) > maxOutput) maxOutput = num1 / num2;
    if ((num1 * num2) > maxOutput) maxOutput = num1 * num2;

    cout << maxOutput << endl;
}
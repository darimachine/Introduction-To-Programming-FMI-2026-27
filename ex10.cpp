#include <iostream>
using namespace std;

int getGreatestCommonDivisor(int firstNum, int secondNum)
{
    if (firstNum < 0)
    {
        firstNum = -firstNum;
    }
    if (secondNum < 0)
    {
        secondNum = -secondNum;
    }
    while (secondNum != 0)
    {
        int remainder = firstNum % secondNum;
        firstNum = secondNum;
        secondNum = remainder;
    }

    return firstNum;
}

int main()
{
    int firstNumerator, firstDenominator, secondNumerator, secondDenominator;
    char slash;

    cin >> firstNumerator >> slash >> firstDenominator >> secondNumerator >> slash >> secondDenominator;

    if (firstDenominator == 0 || secondDenominator == 0)
    {
        cout << "Invalid denominator";
        return 1;
    }

    int resultNumerator = firstNumerator * secondDenominator + secondNumerator * firstDenominator;
    int resultDenominator = firstDenominator * secondDenominator;

    int gcd = getGreatestCommonDivisor(resultNumerator, resultDenominator);

    resultNumerator /= gcd;
    resultDenominator /= gcd;

    if (resultDenominator < 0)
    {
        resultNumerator = - resultNumerator;
        resultDenominator = - resultDenominator;
    }

    if (resultDenominator == 1)
    {
        cout << resultNumerator;
    }
    else
    {
        cout << resultNumerator << '/' << resultDenominator;
    }
}

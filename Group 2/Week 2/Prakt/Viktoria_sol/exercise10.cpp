#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b, c, d;
    char ch;

    cin >> a >> ch >> b >> c >> ch >> d;

    int numerator = a * d + c * b;
    int denominator = b * d;

    int gcdValue = gcd(numerator, denominator);

    numerator /= gcdValue;
    denominator /= gcdValue;

    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    if (denominator != 0 && denominator != 1 && numerator != 0)
    {
        cout << numerator << "/" << denominator << endl;
    }
    else
    {
        cout << numerator << endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);

    int smaller = (a < b) ? a : b;

    for (int i = smaller; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }

    return 1;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char slash;
    cin >> a >> slash >> b >> c >> slash >> d;
    int numerator = (a * d) + (c * b), denominator = b * d;
    int x = numerator, y = denominator;
    while (y != 0)
    {
        int t = y;
        y = x % y;
        x = t;
    }
    numerator /= x;
    denominator /= x;

    if (denominator < 0)
    {
        denominator -= denominator * 2;
        numerator -= numerator * 2;
    }

    if (denominator != 1)
        cout << numerator << '/' << denominator << "\n";
    else
        cout << numerator;

    return 0;
}


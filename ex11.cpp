#include <iostream>
using namespace std;

bool isPalindrome(long long x)
{
    if (x < 0)
    {
        return false;
    }

    long long originalNum = x;
    long long reversedNum = 0;

    while (x > 0)
    {
        reversedNum = reversedNum * 10 + x % 10;
        x /= 10;
    }

    return reversedNum == originalNum;
}

int main()
{
    long long number;
    cin >> number;

    cout << (isPalindrome(number) ? "true" : "false");
}

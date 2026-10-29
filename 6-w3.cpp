
#include <iostream>
using namespace std;

long long gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
long long lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << ' ' << lcm(a,b);
    return 0;
}

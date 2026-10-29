using namespace std;
#include <iostream>

int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    
    if (n < 0 || n > 30)
    {
        cout << "invalid input";
        return 1;
    }

    cout << fib(n);
    return 0;
}

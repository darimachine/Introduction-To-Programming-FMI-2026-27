
#include <iostream>
using namespace std;

int main()
{
    int N;
    int divCount = 0, numCount = 0;
    cin >> N;
    for (int i = 2;i < N;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            if (i % j == 0) divCount++;
        }
        if (divCount == 2)
        {
            cout << i << " ";
            numCount++;
        }
        divCount = 0;
    }
    cout << "\nБрой: " << numCount;
    return 0;
}


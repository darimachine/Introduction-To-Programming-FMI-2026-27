#include <iostream>
using namespace std;

int main()
{
    int n;
INPUT:
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input!" << endl;
        goto INPUT;
    }

    for (int i = 1; i <= n; i++) {
        int sumDigitsCurrent = 0;
        int currentNum = i;
        while (currentNum > 0) {
            sumDigitsCurrent = sumDigitsCurrent + currentNum % 10;
            currentNum /= 10;
        }
        if (sumDigitsCurrent % 2 == 0) {
            cout << i << " ";
        }
    }
    
    cout << endl;
}
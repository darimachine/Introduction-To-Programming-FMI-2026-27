#include <iostream>
using namespace std;

int main()
{
    int n, k;
    INPUT:
    cin >> n >> k;
    if ((n < 1) || (k < 1) || (k > 9)) {
        cout << "Invalid input" << endl;
        goto INPUT;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int newNum = k;
        for (int j = 1; j <= i; j++) {
            newNum = newNum * 10 + k;
        }
        sum = sum + newNum;
    }

    cout << "\n" << sum << endl;
}
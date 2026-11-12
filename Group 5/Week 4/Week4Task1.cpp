#include <iostream>
using namespace std;

int main()
{
    INPUT:
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input" << endl;
        goto INPUT;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int newNum;
        cin >> newNum;
        sum = sum + newNum;
    }

    cout << sum << endl;
}
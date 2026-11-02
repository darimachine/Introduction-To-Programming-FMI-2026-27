#include <iostream>
using namespace std;

int main()
{
    int n;
    INPUT:
    cin >> n;
    if (n < 0) {
        cout << "Invalid input!" << endl;
        goto INPUT;
    }

    cout << endl;
    int currentNum;

    //first part
    for (int i = 1; i < n; i++) {
        currentNum = 1;
        for (int j = 1; j <= i; j++) {
            cout << currentNum;
            currentNum++;
        }
        for (int j = 1; j <= (3 * n - 2 * i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            currentNum--;
            cout << currentNum;
        }
        cout << endl;
    }

    //middle row
    currentNum = 1;
    for (int i = 1; i <= n;i++) {
        cout << currentNum;
        currentNum++;
    }
    for (int i = 1; i <= n;i++) {
        cout << "-";
    }
    for (int i = n; i >= 1;i--) {
        currentNum--;
        cout << currentNum;
    }
    cout << endl;

    //reverse
    for (int i = n - 1; i > 0; i--) {
        currentNum = 1;
        for (int j = 1; j <= i; j++) {
            cout << currentNum;
            currentNum++;
        }
        for (int j = 1; j <= (3 * n - 2 * i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            currentNum--;
            cout << currentNum;
        }
        cout << endl;
    }
}
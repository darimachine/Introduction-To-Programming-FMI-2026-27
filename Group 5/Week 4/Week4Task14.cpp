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

    int currentNumOutput;
    //first half
    for (int i = 1; i <= n; i++) {
        currentNumOutput = 1;
        for (int j = 1; j <= i; j++) {
            cout << currentNumOutput << " ";
            currentNumOutput++;
        }
        cout << endl;
    }
    //second half
    for (int i = n-1; i > 0; i--) {
        currentNumOutput = 1;
        for (int j = 1; j <= i; j++) {
            cout << currentNumOutput << " ";
            currentNumOutput++;
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    INPUT:
    cin >> n;
    //validate input
    if (n <= 0) {
        cout << "Invalid input!" << endl;
        goto INPUT;
    }

    int currentNum;

    //newAddEvenCol refers to the number added when transitioning from an odd number column to an even number;
    //hence the silly annomally in the forming of currentNum (see below)
    int newAddEvenCol = 1;

    for (int i = 1; i <= n;i++) {
        currentNum = i;
        int newAddOddCol = 2 * n - newAddEvenCol;
        for (int j = 1; j <= n;j++) {
            if (j != 1) {
                if (j % 2 == 0) {
                    currentNum = currentNum + newAddOddCol;
                }
                else {
                    currentNum = currentNum + newAddEvenCol;
                }
            }
            cout << currentNum << " ";
        }
        newAddEvenCol += 2;
        cout << endl;
    }
}
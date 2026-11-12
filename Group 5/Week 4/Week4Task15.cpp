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
        for (int j = 1; j <= n; j++) {
            if (j < i) {
                cout << "*";
            }
            if (j == i) {
                cout << i;
            }
            if (j > i) {
                cout << ".";
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;

void drawTreeRow(int n, int i) {
    //empty spaces
    for (int j = 0; j < n - i;j++) {
        cout << " ";
    }
    //symbols
    for (int j = 0; j < i;j++) {
        cout << "*";
    }
    //trunk
    cout << " | ";
    //reverse
    for (int j = 0; j < i;j++) {
        cout << "*";
    }
    for (int j = 0; j < n - i;j++) {
        cout << " ";
    }
    cout << endl;
}

int main()
{
    int n;
INPUT:
    cin >> n;
    if (n < 1) {
        cout << "Invalid input!" << endl;
        goto INPUT;
    }

    for (int i = 0; i <= n;i++) {
        drawTreeRow(n, i);
    }
}
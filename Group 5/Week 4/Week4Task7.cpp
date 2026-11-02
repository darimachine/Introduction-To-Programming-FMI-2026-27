#include <iostream>
using namespace std;

int main()
{
    int n;
    //validate input
INPUT:
    cin >> n;
    if (n < 1) {
        cout << "Invalid input!" << endl;
        goto INPUT;
    }

    //edge cases
    switch (n) {
    case 1: {
        cout << 0 << endl;
        return 0;
        }
    case 2: {
        cout << 1 << endl;
        return 0;
    }
    }

    //regular scenario
    int fibN1 = 0;
    int fibN2 = 1;
    for (int i = 2; i <
        n;i++) {
        int temp;
        temp = fibN2;
        fibN2 = fibN2 + fibN1;
        fibN1 = temp;
    }
    //now the desired number is stored in fibN2

    cout << fibN2 << endl;
    return 0;
}
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

    //edge case: 0 - what to output?
    
    //edge case: 1?
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    //regular
    int delCount = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) delCount++;
    }

    cout << delCount << endl;
}
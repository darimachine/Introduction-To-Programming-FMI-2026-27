#include <iostream>
using namespace std;

int main()
{
    int numberOfNums;
    cin >> numberOfNums;

    int currentNum;
    int maxNum = INT16_MIN;

    for (int i = 0; i < numberOfNums; i++) {
        cin >> currentNum;
        if (currentNum > maxNum) {
            maxNum = currentNum;
        }
    }

    cout << maxNum << endl;
}

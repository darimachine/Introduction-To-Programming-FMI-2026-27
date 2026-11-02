#include <iostream>
using namespace std;

int main()
{
    int currentNum, positivesSum = 0, positivesCount = 0;
    while (positivesCount < 5) {
        cin >> currentNum;
        if (currentNum > 0) {
            positivesCount++;
            positivesSum = positivesSum + currentNum;
        }
    }
    cout << positivesSum << endl;
}
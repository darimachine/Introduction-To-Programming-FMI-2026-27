#include <iostream>
using namespace std;

int main()
{
    int currentNum, currentMinNegative = 0, consequentNegativesCount = 0;
    while (consequentNegativesCount < 3) {
        cin >> currentNum;
        if (currentNum < 0) {
            consequentNegativesCount++;
            if (currentNum < currentMinNegative) {
                currentMinNegative = currentNum;
            }
        }
        else {
            currentMinNegative = 0;
            consequentNegativesCount = 0;
        }
    }
    cout << "\n" << currentMinNegative << endl;
}
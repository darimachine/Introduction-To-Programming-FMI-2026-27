#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 6;
    int currentNum = 6;
    int counter = 1;

    //edge case: n<6
    if (n < 6) {
        cout << 0 << endl;
        return 0;
    }

    //regular case
    while (currentNum <= n) {
        
        //This line was needed for testing:
        //cout << currentNum << endl;

        if (counter % 2 == 1) {
            currentNum = currentNum + 2;
        }
        else {
            currentNum = currentNum + 8;
        }
        sum = sum + currentNum;
        counter++;
    }

    //now sum contains the next number after n, which we don't need
    sum = sum - currentNum;
    cout << sum << endl;
}
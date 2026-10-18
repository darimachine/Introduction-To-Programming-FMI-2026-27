#include <iostream>
using namespace std;

int main() {

    long number;
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    int cnt = 0;
    int sum = 0;
    int reversedNum = 0;
    int max = 0;
    while (number > 0) {
        cnt++;
        int digit = number % 10;

        if (digit > max) {
            max = digit;
        }

        reversedNum = reversedNum * 10;
        reversedNum += digit;

        sum = sum + digit;

        number /= 10;
    }

    cout << "digit count: " << cnt << endl;
    cout << "sum: " << sum << endl;
    cout << "reversed: " << reversedNum << endl;
    cout << "biggest digit: " << max;

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    int num;
    cin >> num;

    int cntPrimes = 0;
    for (int i = 2; i <= num; i++) {

        bool isPrime = true;
        for (int j = 2; j < i; j++) {

            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cntPrimes++;
            cout << i << " ";
        }
    }

    cout << endl << cntPrimes;

    return 0;
}
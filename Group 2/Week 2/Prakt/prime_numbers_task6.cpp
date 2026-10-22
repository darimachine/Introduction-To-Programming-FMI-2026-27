#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;


    int count = 0;

    for (int number = 1; number <= N; number++) {
        int divisors = 0;

        for (int d = 1; d <= number; d++) {
            if (number % d == 0) {
                divisors++;
            }
        }

        if (divisors == 2) {
            cout << number << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Count: " << count << endl;
    return 0;
}
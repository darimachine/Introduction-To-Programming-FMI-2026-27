#include <iostream>
using namespace std;

int myPow(int base, int pow) {
    int output = 1;
    if (pow == 0) return 1;
    for (int i = 1; i <= pow;i++) {
        output = output * base;
    }
    return output;
}

int biggestPow2(int n) {
    int result = 0;
    while (myPow(2, result) <= n) {
        result++;
    }
    result--;
    return result;
}

int main()
{
    int n;
    cin >> n;

    int first = biggestPow2(n);
    cout << "2^" << first;
    n = n - myPow(2, first);
    while (n != 0) {
        int temp = biggestPow2(n);
        cout << " + 2^" << temp;
        n = n - myPow(2, temp);
    }
}
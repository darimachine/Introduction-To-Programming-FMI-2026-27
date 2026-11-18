#include <iostream>
using namespace std;


long long decimalToBinary(int n) {
    long long result = 0;
    long long place = 1;

    while (n > 0) {
        int ostatuk = n % 2;
        result += ostatuk * place;
        place = place * 10;
        n = n / 2;
    }

    return result;
}

int binaryToDecimal(long long n) {
    int result = 0;
    int place = 1;

    while (n > 0) {
        int cifra = n % 10;
        result += cifra * place;
        place = place*2;
        n = n/ 10;
    }

    return result;
}

int main() {
    char choice;
    long long number;

    cin >> choice >> number;
    switch (choice) {
    case 'b':
        cout << decimalToBinary(number);
        break;

    case 'd':
        cout << binaryToDecimal(number);
        break;
    }
    return 0;
}
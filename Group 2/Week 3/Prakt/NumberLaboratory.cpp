#include <iostream>
using namespace std;

const int MAX_N = 9000000;
const int ERATOSTEN_SIZE = 10000000;

// Глобален масив: около 10 MB. Като локален в main() би препълнил стека.
// isPrimeNumber[i] == true означава, че i е просто.
bool isPrimeNumber[ERATOSTEN_SIZE];

void buildEratosten() {
    // В началото приемаме, че всички числа от 2 нататък са прости.
    // 0 и 1 не са прости и остават false (глобалният масив започва с false).
    for (int i = 2; i < ERATOSTEN_SIZE; i++) {
        isPrimeNumber[i] = true;
    }

    for (int i = 2; (long long)i * i < ERATOSTEN_SIZE; i++) {
        if (isPrimeNumber[i]) {
            // Всички кратни на i от i*i нататък не са прости.
            // По-малките кратни вече са зачеркнати от по-малки прости числа.
            for (int j = i * i; j < ERATOSTEN_SIZE; j += i) {
                isPrimeNumber[j] = false;
            }
        }
    }
}

bool isPrime(int n) {
    return isPrimeNumber[n];
}

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
  
    return reversed;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
  
    return sum;
}

bool isPalindromicPrime(int n) {
    return isPrime(n) && isPalindrome(n);
}

int readNumber(int minValue, int maxValue) {
    int n;
    cin >> n;
    while (n < minValue || n > maxValue) {
        cout << "Number must be between " << minValue << " and " << maxValue << ". Try again: ";
        cin >> n;
    }
  
    return n;
}

// Menu functions

void printMenu() {
    cout << "===== Number Lab =====" << endl;
    cout << "1. Analyze a number" << endl;
    cout << "2. Interval statistics" << endl;
    cout << "3. Next palindromic prime" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";
}

void analyzeNumber() {
    cout << "Enter a number: ";
    int n = readNumber(1, MAX_N);

    cout << "Reversed: " << reverseNumber(n) << endl;
    cout << "Digit sum: " << digitSum(n) << endl;
    cout << "Prime: " << (isPrime(n) ? "Yes" : "No") << endl;
    cout << "Palindrome: " << (isPalindrome(n) ? "Yes" : "No") << endl;
}

void intervalStats() {
    int a, b;
    cout << "Enter A and B: ";
    a = readNumber(1, MAX_N);
    b = readNumber(1, MAX_N);

    while (a > b) {
        cout << "Invalid interval! Enter A and B again: ";
        a = readNumber(1, MAX_N);
        b = readNumber(1, MAX_N);
    }

    int primes = 0;
    int palindromes = 0;
    int palindromicPrimes = 0;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            primes++;
        }
        if (isPalindrome(i)) {
            palindromes++;
        }
        if (isPalindromicPrime(i)) {
            palindromicPrimes++;
        }
    }

    cout << "Primes: " << primes << endl;
    cout << "Palindromes: " << palindromes << endl;
    cout << "Palindromic primes: " << palindromicPrimes << endl;
}

void nextPalindromicPrime() {
    cout << "Enter a number: ";
    int n = readNumber(1, MAX_N);

    int candidate = n + 1;
    while (!isPalindromicPrime(candidate)) {
        candidate++;
    }

    cout << "Next palindromic prime: " << candidate << endl;
}

void engine() {
    int option;
    do {
        printMenu();
        cin >> option;

        switch (option) {
            case 1:
                analyzeNumber();
                break;
            case 2:
                intervalStats();
                break;
            case 3:
                nextPalindromicPrime();
                break;
            case 0:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        cout << endl;
    } while (option != 0);
}

int main() {
    buildEratosten();
    engine();

    return 0;
}

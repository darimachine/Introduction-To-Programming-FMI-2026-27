#include <iostream>

bool isPrime(int input) {
    // edge cases
    if (input == 1) {
        return false;
    }
    if (input == 2) {
        return true;
    }

    if (input % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i < input; i += 2) {
        if (input % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int input;
    std::cin >> input;

    std::cout << std::boolalpha << input << " " << isPrime(input) << std::endl;

    return 0;
}

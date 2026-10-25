#include <iostream>

int main() {
    int s;
    std::cin >> s;

    switch (s) {
    case 0:
    case 1:
    case 2:
        std::cout << "simple";
        break;
    case 3:
    case 4:
        std::cout << "ops ";
    case 5:
        std::cout << "five";
        break;
    }

    std::cout << std::endl;

    if (s == 0 || s == 1 || s == 2) {
        std::cout << "simple";
    } else if (s == 3 || s == 4) {
        std::cout << "ops five";
    } else if (s == 5) {
        std::cout << "five";
    }

    return 0;
}

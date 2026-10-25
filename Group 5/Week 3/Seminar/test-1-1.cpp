#include <iostream>

int main() {
    int x;
    std::cin >> x;

    ((x == 2 || x == 7) ? std::cout << "one"
                        : (x == 8 ? std::cout << 4 : std::cout << "undef"));

    std::cout << std::endl;

    switch (x) {
    case 2:
    case 7:
        std::cout << "one";
        break;
    case 8:
        std::cout << 4;
        break;
    default:
        std::cout << "undef";
        break;
    }
}

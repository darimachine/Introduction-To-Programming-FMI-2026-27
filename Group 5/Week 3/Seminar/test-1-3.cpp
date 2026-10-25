#include <iostream>

int main() {
    int a;
    std::cin >> a;

    if (a == 10)
        std::cout << "xyz";
    if ((a == 4) || (a == 6))
        std::cout << "this!";
    if ((a >= 6) && (a <= 8))
        std::cout << "correct";

    std::cout << std::endl;

    switch (a) {
    case 10:
        std::cout << "xyz";
        break;
    case 6:
        std::cout << "this!correct";
        break;
    case 4:
        std::cout << "this!";
        break;
    case 7:
    case 8:
        std::cout << "correct";
        break;
    }

    return 0;
}

#include <iostream>

int main() {
    for (int bottles = 99; bottles >= 2; bottles--) {
        std::cout << bottles << " bottle" << (bottles == 1 ? "" : "s")
                  << " of beer on the wall, " << bottles << " bottle"
                  << (bottles == 1 ? "" : "s") << " of beer." << std::endl;
        std::cout << "Take one down and pass it around, " << (bottles - 1)
                  << " bottle" << ((bottles - 1) == 1 ? "" : "s")
                  << " of beer on the wall." << std::endl;
        std::cout << std::endl;
    }

    std::cout << "1 bottle of beer on the wall, 1 bottle of beer." << std::endl;
    std::cout << "Take one down and pass it around, no more bottles of beer on "
                 "the wall."
              << std::endl;
    std::cout << std::endl;

    std::cout << "No more bottles of beer on the wall, no more bottles of beer."
              << std::endl;
    std::cout
        << "Go to the store and buy some more, 99 bottles of beer on the wall."
        << std::endl;

    return 0;
}

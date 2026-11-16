#include <iostream>

const int SIZE = 5;

int main() {
    int uninitialized[5];

    int zeroes[5] = {};

    int initialized[5] = {1, 2, 3, 4, 5};

    int implicitSize[] = {1, 2, 3, 4, 5};

    int constSize[SIZE] = {};

    // DO NOT!
    // int size;
    // std::cin >> size;
    // int variableLengthArray[size] = {};

    return 0;
}

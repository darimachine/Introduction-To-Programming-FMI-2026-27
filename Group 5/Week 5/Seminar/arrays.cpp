#include <iostream>

void inputArray(int input[], int size) {
    for (int i = 0; i < size; i++) {
        std::cin >> input[i];
    }
}

void printArray(int input[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int MAX_SIZE = 50;

    int size;
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Bad size" << std::endl;
        return 1;
    }

    int numbers[MAX_SIZE];

    inputArray(numbers, size);
    printArray(numbers, size);

    return 0;
}

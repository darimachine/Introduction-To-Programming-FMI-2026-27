#include <iostream>

// O(n)
int search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }

    return -1;
}

// O(n^2)
bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }

    return false;
}

const int SIZE = 100000;

int arr[SIZE];

int main() {
    // Init
    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    std::cout << "search() start" << std::endl;
    search(arr, SIZE, -1);
    std::cout << "search() end" << std::endl;
    std::cout << std::endl;

    std::cout << "hasDuplicates() start" << std::endl;
    hasDuplicates(arr, SIZE);
    std::cout << "hasDuplicates() end" << std::endl;

    return 0;
}

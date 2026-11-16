#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int search(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {5, 4, 30, 2, 3, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    std::cout << "index of 2: " << search(arr, size, 2) << std::endl;
    std::cout << "index of 20: " << search(arr, size, 20) << std::endl;

    return 0;
}

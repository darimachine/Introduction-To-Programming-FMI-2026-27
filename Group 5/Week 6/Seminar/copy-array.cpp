#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void copyArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

int main() {
    const int size = 3;

    int arr1[size] = {10, 50, 70};
    int arr2[size] = {};

    copyArray(arr1, arr2, size);

    printArray(arr1, size);
    printArray(arr2, size);

    return 0;
}

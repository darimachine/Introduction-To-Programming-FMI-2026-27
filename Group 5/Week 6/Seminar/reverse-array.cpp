#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArray(int arr[], int size) {
    // swap(arr[0], arr[size - 1]);
    // swap(arr[1], arr[size - 2]);
    // swap(arr[2], arr[size - 3]);
    // ...
    // swap(arr[i], arr[size - i - 1]);

    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main() {
    int arr[] = {5, 4, 30, 2, 3, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}

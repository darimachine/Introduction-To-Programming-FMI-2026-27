#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool compareArrays(int arr1[], int size1, int arr2[], int size2) {
    if (size1 != size2) {
        return false;
    }

    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    const int size = 3;

    int arr1[size] = {10, 50, 70};
    int arr2[size] = {10, 55, 70};

    printArray(arr1, size);
    printArray(arr2, size);

    bool areEqual = compareArrays(arr1, size, arr2, size);

    std::cout << std::boolalpha << areEqual << std::endl;

    return 0;
}

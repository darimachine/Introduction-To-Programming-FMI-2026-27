#include <iostream>

const int MAX_SIZE = 100;

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void merge(const int arr1[], int size1, const int arr2[], int size2,
           int result[], int &resultSize) {
    resultSize = size1 + size2;

    int index1 = 0;
    int index2 = 0;
    int resultIndex = 0;

    while (index1 < size1 && index2 < size2) {
        if (arr1[index1] < arr2[index2]) {
            result[resultIndex] = arr1[index1];
            resultIndex++;
            index1++;
        } else {
            result[resultIndex] = arr2[index2];
            resultIndex++;
            index2++;
        }
    }

    while (index1 < size1) {
        result[resultIndex] = arr1[index1];
        resultIndex++;
        index1++;
    }

    while (index2 < size2) {
        result[resultIndex] = arr2[index2];
        resultIndex++;
        index2++;
    }
}

int main() {
    int arr1[] = {1, 3, 6, 7, 8};
    const int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 5, 7, 9, 11, 12};
    const int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[MAX_SIZE];
    int resultSize;

    merge(arr1, size1, arr2, size2, result, resultSize);

    printArray(result, resultSize);

    return 0;
}

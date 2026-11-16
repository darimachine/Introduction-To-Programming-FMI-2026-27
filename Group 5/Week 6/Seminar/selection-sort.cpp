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

// selection sort
// O(n^2)
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (i != min) {
            swap(arr[i], arr[min]);
        }
    }
}

int main() {
    int arr[] = {5, 4, 30, 2, 3, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);

    return 0;
}

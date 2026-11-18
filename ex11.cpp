#include <iostream>
using namespace std;

const int ARRAY_SIZE = 1000;

bool isValidSize(int size)
{
    return size >= 1 && size <= ARRAY_SIZE;
}

bool readArray(int arr[], int& size)
{
    cin >> size;
    if (!isValidSize(size))
    {
        return false;
    }

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return true;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void combineArrays(int nums1[], int n, int nums2[], int m, int combinedNums[])
{
    int currentN = 0;
    int currentM = 0;
    int i = 0;

    while (currentN < n && currentM < m) {
        if (nums1[currentN] < nums2[currentM]) {
            combinedNums[i++] = nums1[currentN++];
        }
        else {
            combinedNums[i++] = nums2[currentM++];
        }
    }

    while (currentN < n) {
        combinedNums[i++] = nums1[currentN++];
    }

    while (currentM < m) {
        combinedNums[i++] = nums2[currentM++];
    }
}

int main()
{
    int n, m;
    int nums1[ARRAY_SIZE], nums2[ARRAY_SIZE];

    if (!readArray(nums1, n)) {
        cout << "invalid size";
        return 1;
    }

    if (!readArray(nums2, m)) {
        cout << "invalid size";
        return 1;
    }

    int combinedNums[2 * ARRAY_SIZE];
    combineArrays(nums1, n, nums2, m, combinedNums);

    printArray(combinedNums, n + m);
    return 0;
}

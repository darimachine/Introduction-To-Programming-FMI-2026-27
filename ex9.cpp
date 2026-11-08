#include <iostream>
using namespace std;

const int ARRAY_SIZE = 100000;

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

int getIndexBinarySearch(int arr[], int size, int num)
{
    int startIndex = 0;
    int endIndex = size - 1;

    while (startIndex <= endIndex)
    {
        int middleIndex = startIndex + (endIndex - startIndex) / 2;

        if (arr[middleIndex] == num)
        {
            return middleIndex;
        }
        if (num < arr[middleIndex])
        {
            endIndex = middleIndex - 1;
        }
        else
        {
            startIndex = middleIndex + 1;
        }
    }

    return -1;
}

void printBinarySearchResults(int nums[], int numsCount, int numsToSearch[], int numsToSearchCount)
{
    for (int i = 0; i < numsToSearchCount; i++)
    {
        cout << getIndexBinarySearch(nums, numsCount, numsToSearch[i]) << endl;
    }
}

int main()
{
    int numsCount, numsToSearchCount;
    int nums[ARRAY_SIZE], numsToSearch[ARRAY_SIZE];

    if (!readArray(nums, numsCount)) {
        cout << "invalid size"; 
        return 1;
    }

    if (!readArray(numsToSearch, numsToSearchCount)) {
        cout << "invalid size";
        return 1;
    }
    
    printBinarySearchResults(nums, numsCount, numsToSearch, numsToSearchCount);

    return 0;
}

#include <iostream>
using namespace std;

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

bool isValidSize(int size)
{
    return size >= 1 && size <= 100000;
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

int main()
{
    int numsCount, numsToSearchCount;
    int nums[100000], numsToSearch[100000];

    cin >> numsCount;

    if (!isValidSize(numsCount))
    {
        cout << "invalid size";
        return 1;
    }

    readArray(nums, numsCount);

    cin >> numsToSearchCount;

    if (!isValidSize(numsToSearchCount))
    {
        cout << "invalid size";
        return 1;
    }

    readArray(numsToSearch, numsToSearchCount);

    for (int i = 0; i < numsToSearchCount; i++)
    {
        cout << getIndexBinarySearch(nums, numsCount, numsToSearch[i]) << endl;
    }

    return 0;
}

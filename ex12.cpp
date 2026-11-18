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

int findMaxConsecutiveOnes(int nums[], int size)
{
    int longestSequence = 0;
    int currentSequence = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 0)
        {
            currentSequence = 0;
            continue;
        }
        currentSequence++;
        if (currentSequence > longestSequence) {
            longestSequence = currentSequence;
        }
    }
    return longestSequence;
}

bool containsOnlyZerosAndOnes(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0 && nums[i] != 1) {
            return false;
        }
    }
    return true;
}

int main()
{
    int nums[ARRAY_SIZE];
    int size;
    
    if (!readArray(nums, size)) {
        cout << "invalid size";
        return 1;
    }
    
    if (!containsOnlyZerosAndOnes(nums, size)) {
        cout << "invalid input: array elements must be 0 or 1";
        return 2;
    }

    int result = findMaxConsecutiveOnes(nums, size);
    cout << result;

    return 0;
}

#include <iostream>
using namespace std;

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int findMaxConsecutiveOnes(int size, int nums[])
{
    int longestSequence = 0;
    int currentSequence = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0 && nums[i] != 1) {
            return -1;
        }
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

int main()
{
    int nums[100000];
    int size;
    cin >> size;

    if (size < 1 || size > 100000)
    {
        cout << "invalid size";
        return 1;
    }

    readArray(nums, size);
    
    int result = findMaxConsecutiveOnes(size, nums);
    
    if (result == -1) 
    {
        cout << "invalid input";
        return 1;
    }

    cout << result;
    return 0;
}

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10000;

bool isValidSize(int size)
{
    return size >= 2 && size <= ARRAY_SIZE;
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

void twoSum(int nums[], int size, int target)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << ", " << j << "]";
                return;
            }
        }
    }
}

int main()
{
    int nums[ARRAY_SIZE];
    int size;

    if (!readArray(nums, size)) {
        cout << "invalid size";
        return 1;
    }

    int target;
    cin >> target;

    twoSum(nums, size, target);
    return 0;
}

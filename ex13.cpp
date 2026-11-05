#include <iostream>
using namespace std;

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void twoSum(int size, int target, int nums[])
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
    int nums[10000];
    int size, target;
    cin >> size;

    if (size < 2 || size > 10000)
    {
        cout << "invalid size";
        return 1;
    }

    readArray(nums, size);
    cin >> target;

    twoSum(size, target, nums);
    return 0;
}

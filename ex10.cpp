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

void findNumsFrequencies(int n, int nums[], int numsFrequencies[], int& distinctCount)
{
    for (int i = 0; i < n; i++)
    {
        if (numsFrequencies[nums[i]] == 0)
        {
            distinctCount++;
        }

        numsFrequencies[nums[i]]++;
    }
}

void findMostFrequentNum(int n, int nums[])
{
    int numsFrequencies[100001] = {};
    int distinctCount = 0;
    findNumsFrequencies(n, nums, numsFrequencies, distinctCount);

    int mostFrequentNum = nums[0];
    int maxFrequency = numsFrequencies[mostFrequentNum];

    for (int i = 1; i < n; i++)
    {
        int currentNum = nums[i];
        if (numsFrequencies[currentNum] > maxFrequency || (numsFrequencies[currentNum] == maxFrequency && currentNum < mostFrequentNum))
        {
            mostFrequentNum = currentNum;
            maxFrequency = numsFrequencies[mostFrequentNum];
        }
    }

    cout << "Distinct: " << distinctCount << endl;
    cout << "Most frequent: " << mostFrequentNum << " (" << maxFrequency << " times)";
}

int main()
{
    int n;
    int nums[100000];

    cin >> n;

    if (!isValidSize(n))
    {
        cout << "invalid size";
        return 1;
    }

    readArray(nums, n);
    findMostFrequentNum(n, nums);
    return 0;
}

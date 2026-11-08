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

void findNumsFrequencies(int nums[], int n, int numsFrequencies[], int& distinctCount)
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

void findMostFrequentNum(int nums[], int n)
{
    int numsFrequencies[ARRAY_SIZE + 1] = {};
    int distinctCount = 0;
    findNumsFrequencies(nums, n, numsFrequencies, distinctCount);

    int mostFrequentNum = nums[0];
    int maxFrequency = numsFrequencies[mostFrequentNum];

    for (int i = 1; i < n; i++)
    {
        int currentNum = nums[i];

        if (numsFrequencies[currentNum] > maxFrequency 
            || (numsFrequencies[currentNum] == maxFrequency && currentNum < mostFrequentNum))
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
    int nums[ARRAY_SIZE];
    
    if (!readArray(nums, n)) {
        cout << "invalid size";
        return 1;
    }
    
    findMostFrequentNum(nums, n);
    return 0;
}

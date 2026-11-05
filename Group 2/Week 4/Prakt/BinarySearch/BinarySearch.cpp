#include <iostream>
using namespace std;

void readSearchArray(const int nums[], int searchArrCount , int numsCount);
void binarySearch(int numsCount, const int nums[], int numToFind);

int main()
{
    int numsCount = 0;
    int numbersToFindCount = 0;
    
    cin >> numsCount;
    int nums[100000] = { 0 };
    
    for (int i = 0; i < numsCount; i++)
    {
        cin >> nums[i];
    }   
    
    cin >> numbersToFindCount;
    readSearchArray(nums, numbersToFindCount, numsCount);

    
}

void readSearchArray(const int nums[], int searchArrCount, int numsCount)
{
    for (int i = 0; i < searchArrCount; i++)
    {
        int temp;
        cin >> temp;
        binarySearch(numsCount, nums, temp);
    }   
}

void binarySearch(int numsCount, const int nums[], int numToFind)
{
    int left = 0;
    int right = numsCount - 1;
    int foundIndex = -1;
    int mid = 0;
    
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (nums[mid] == numToFind)
        {
            foundIndex = mid;
            break;
        }
        

        if (nums[mid] > numToFind)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << foundIndex << '\n';
}
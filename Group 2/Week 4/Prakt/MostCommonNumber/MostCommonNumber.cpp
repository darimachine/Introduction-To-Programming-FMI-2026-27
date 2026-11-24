#include <iostream>

using namespace std;

int isFound(int arrCount, int nums[], int target);

int main()
{
    int temp = 0;
    cin >> temp;
    const int n = temp;

    int input[n] = { 0 };
    int uniqueNums[n] = { 0 };
    int uniqueNumIndex = 0;
    int occurrences[n] = { 0 };
    int mostOccurrencesIndex = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];        
    }

    for (int i = 0; i < n; i++)
    {
        int index = isFound(uniqueNumIndex, uniqueNums, input[i]);

        if (index == -1)
        {
            uniqueNums[uniqueNumIndex] = input[i];
            occurrences[uniqueNumIndex]++;
            index = uniqueNumIndex;
            uniqueNumIndex++;
        }
        else
        {
            occurrences[index]++;
        }

        if (occurrences[mostOccurrencesIndex] < occurrences[index] || 
                (occurrences[mostOccurrencesIndex] == occurrences[index] && 
                    uniqueNums[mostOccurrencesIndex] > uniqueNums[index]))
        {
            mostOccurrencesIndex = index;
        }
    }
    
    cout << "Distinct: " << uniqueNumIndex << endl;
    cout << "Most frequent: " << uniqueNums[mostOccurrencesIndex] << "(" << occurrences[mostOccurrencesIndex] << "times" << ")";
}

int isFound(int arrCount, int nums[], int target)
{
    int foundIndex = -1;

    for (int i = 0; i < arrCount; i++)
    {
        if (nums[i] == target)
        {
            return i;
            
        }
        
    }
    
    return foundIndex;
}
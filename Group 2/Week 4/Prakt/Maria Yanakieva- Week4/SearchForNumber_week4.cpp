#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x, int& count)
{
    int firstIndex = -1;

    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            count++;

            if (count == 1)
            {
                firstIndex = i;
            }
        }
    }

    return firstIndex;
}

int main()
{
    int arrayLength;

    cin >> arrayLength;

    const int maxLength = 1000;
    int numbers[maxLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> numbers[i];
    }

    int targetNumber;

    cin >> targetNumber;

    int count;
    int firstIndex = linearSearch(numbers, arrayLength, targetNumber, count);

    cout << "First index: " << firstIndex << endl;
    cout << "Count: " << count << endl;

    return 0;
}
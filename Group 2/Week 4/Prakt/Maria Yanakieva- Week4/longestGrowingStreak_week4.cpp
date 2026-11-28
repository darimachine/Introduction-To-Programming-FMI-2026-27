#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    const int maxSize = 1000;
    int numbers[maxSize];

    int currentCount = 1;
    int maxCount = 1;

    int startIndex = 0;
    int maxStartIndex = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > numbers[i - 1])
        {
            currentCount++;
        }
        else
        {
            currentCount = 1;
            startIndex = i;
        }

        if (maxCount < currentCount)
        {
            maxCount = currentCount;
            maxStartIndex = startIndex;
        }
    }

    cout << "Length: " << maxCount << endl;

    for (int i = maxStartIndex; i < maxStartIndex + maxCount; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
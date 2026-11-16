#include <iostream>
using namespace std;

int main()
{
    int arrayLength;

    cin >> arrayLength;

    const int maxLength = 1000;
    int numbers[maxLength];

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> numbers[i];

        if (numbers[i] < numbers[minIndex])
        {
            minIndex = i;
        }

        if (numbers[i] > numbers[maxIndex])
        {
            maxIndex = i;
        }
    }

    cout << "Min: " << numbers[minIndex] << " (index " << minIndex << ")" << endl;
    cout << "Max: " << numbers[maxIndex] << " (index " << maxIndex << ")" << endl;

    return 0;
}
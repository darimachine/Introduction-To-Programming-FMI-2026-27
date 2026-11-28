#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    const int maxSize = 100000;
    int numbers[maxSize];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int searchCount;
    cin >> searchCount;

    for (int i = 0; i < searchCount; i++)
    {
        int number;
        cin >> number;

        int left = 0;
        int right = size - 1;
        int foundIndex = -1;

        while (left <= right)
        {
            int middle = (left + right) / 2;

            if (numbers[middle] == number)
            {
                foundIndex = middle;
                break;
            }
            else if (numbers[middle] < number)
            {
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
            }
        }

        cout << foundIndex << endl;
    }

    return 0;
}
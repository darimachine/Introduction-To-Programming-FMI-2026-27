#include <iostream>
using namespace std;

int main()
{
    int arrayLength;

    cin >> arrayLength;

    const int maxLength = 10000;
    int numbers[maxLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> numbers[i];
    }

    int target;

    cin >> target;

    for (int i = 0; i < arrayLength; i++)
    {
        for (int j = i + 1; j < arrayLength; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                cout << i << " " << j << endl;

                return 0;
            }
        }
    }

    return 0;
}
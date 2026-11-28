#include <iostream>
using namespace std;

int main()
{
    int arrayLength;

    cin >> arrayLength;

    const int maxLength = 1000;
    int numbers[maxLength];

    long long sum = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = (double)sum / arrayLength;
    int count = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        if (numbers[i] > average)
        {
            cout << numbers[i] << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Count: " << count << endl;

    return 0;
}
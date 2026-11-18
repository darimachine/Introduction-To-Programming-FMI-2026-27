#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    const int maxSize = 100000;
    int numbers[maxSize];
    int frequencies[maxSize + 1] = { 0 };// това {0} е от чата, питах как да запълня масива с нули, без да правя отделен for

    int distinctCount = 0;
    int mostFrequentNumber = 0;
    int maxCount = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        frequencies[numbers[i]]++;
    }

    for (int i = 1; i <= maxSize; i++)
    {
        if (frequencies[i] > 0)
        {
            distinctCount++;
        }

        if (frequencies[i] > maxCount)
        {
            maxCount = frequencies[i];
            mostFrequentNumber = i;
        }
    }

    cout << "Distinct: " << distinctCount << endl;
    cout << "Most frequent: " << mostFrequentNumber
        << " (" << maxCount << " times)" << endl;

    return 0;
}
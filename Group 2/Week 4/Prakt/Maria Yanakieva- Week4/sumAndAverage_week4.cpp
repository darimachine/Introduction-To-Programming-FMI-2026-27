#include <iostream>
using namespace std;

int main()
{
    int sizeArray;
    cin >> sizeArray;

    const int arrayMaxSize = 100;
    int numbersArray[arrayMaxSize];

    int sum = 0;
    double average = 0.0;

    for (int i = 0; i < sizeArray; i++)
    {
        cin >> numbersArray[i];
        sum += numbersArray[i];
    }

    average = (double)sum / sizeArray;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
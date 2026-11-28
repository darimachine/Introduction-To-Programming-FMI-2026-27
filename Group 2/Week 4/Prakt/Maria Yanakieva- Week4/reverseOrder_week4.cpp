#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int numbers[100];

    for (int i = 0; i < number; i++)
    {
        cin >> numbers[i];
    }

    for (int i = number - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
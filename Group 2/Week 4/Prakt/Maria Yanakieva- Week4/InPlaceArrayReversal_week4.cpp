#include <iostream>
using namespace std;

int main()
{
    int arrayLength;

    cin >> arrayLength;

    const int maxLength = 1000;
    int numbers[maxLength];

    bool palindrome = true;

    for (int i = 0; i < arrayLength; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < arrayLength / 2; i++)
    {
        int j = arrayLength - 1 - i;

        if (numbers[i] != numbers[j])
        {
            palindrome = false;
        }

        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    for (int i = 0; i < arrayLength; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;

    if (palindrome)
    {
        cout << "Palindrome: Yes" << endl;
    }
    else
    {
        cout << "Palindrome: No" << endl;
    }

    return 0;
}
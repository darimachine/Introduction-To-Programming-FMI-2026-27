#include <iostream>
using namespace std;

int main()
{
	int number;
	cin << number;

	const int maxLength = 1000;
	int numbers[maxLength];

	for (int i = 0; i < number; i++)
	{
		cin << numbers[i];
	}

    int k;
    cin >> k;

    k %= size;

    for (int rotation = 0; rotation < k; rotation++)
    {
        int firstElement = numbers[0];

        for (int i = 0; i < size - 1; i++)
        {
            numbers[i] = numbers[i + 1];
        }

        numbers[size - 1] = firstElement;
    }

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
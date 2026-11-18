#include <iostream>

using namespace std;

void readArray(int array[], int arrayCount);

int main()
{
    int temp;
    cin >> temp;
    const int size1 = temp;
    int arr1[1000] = { 0 };
    readArray(arr1, size1);
    
    cin >> temp;
    const int size2 = temp;
    int arr2[1000] = { 0 };
    readArray(arr2, size2);
    int newArr[2000] = { 0 };

    int arr1Pointer = 0;
    int arr2Pointer = 0;
    int counter = 0;

    while (arr1Pointer < size1 && arr2Pointer < size2)
    {
        if (arr1[arr1Pointer] > arr2[arr2Pointer])
        {
            newArr[counter] = arr2[arr2Pointer];
            arr2Pointer++;
        }

        else
        {
            newArr[counter] = arr1[arr1Pointer];
            arr1Pointer++;
        }

        counter++;
    }
    
    while (arr1Pointer < size1)
    {
        newArr[counter] = arr1[arr1Pointer];
        arr1Pointer++;
        counter++;
    }
    
    while (arr2Pointer < size2)
    {
        newArr[counter] = arr2[arr2Pointer];
        arr2Pointer++;
        counter++;
    }

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << newArr[i] << " ";
    }

    cout << endl;
}

void readArray(int array[], int arrayCount)
{
    for (int i = 0; i < arrayCount; i++)
    {
        cin >> array[i];
    }
}
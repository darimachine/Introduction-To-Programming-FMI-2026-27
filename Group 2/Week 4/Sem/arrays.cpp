#include <iostream>

using namespace std;

int lengthOfLongestSequence(int a[100], int sizeOfArray);
void occurancesOfNumber(int a[100], int sizeOfArray);

int main() {

    int n;
    cin >> n;
    int a[100];

    

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];        
    }
    occurancesOfNumber(a, n);

    //int zerosCount = 0;
    //for (int i = 0; i < n; i++)
    //{
    //    if (a[i] == 0)
    //    {
    //        a[i] = a[n - zerosCount - 1];
    //        zerosCount++;
    //    }
    //}

    //for (int i = n - 1; i > n - zerosCount - 1; i--)
    //{
    //    a[i] = 0;
    //}
    //for (int i = 0; i < n; i++)
    //{
    //    cout << a[i] << " ";
    //}
}

int lengthOfLongestSequence(int a[100], int sizeOfArray)
{
    int longestSequenceCount = 1;
    int currentSequenceCount = 1;
    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            currentSequenceCount++;
            if (currentSequenceCount > longestSequenceCount)
            {
                longestSequenceCount = currentSequenceCount;
            }
        }
        else
        {
            currentSequenceCount = 0;
        }
    }
    return longestSequenceCount;
}


void occurancesOfNumber(int a[100], int sizeOfArray)
{
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        int currentElement = a[i];
        int currentElementCount = 1;
        for (int j = i + 1; j < sizeOfArray; j++)
        {
            if (a[j] == currentElement)
            {
                currentElementCount++;
                for (int c = j ; c < sizeOfArray - 1; c++)
                {
                    a[c] = a[c + 1];
                }
                sizeOfArray--;
                j--; // <----- What we were missing
                // Когато изтрием следващите елементи, вече сме на различен елемент, затова не ни трябва да инкрементираме j++ при следващата итерация
            }
        }
        cout << currentElement << " Occurs:" << currentElementCount<<endl;

    }
}
#include <iostream>
using namespace std;

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void combineArrays(int nums1[], int n, int nums2[], int m, int combinedNums[])
{
    int currentN = 0;
    int currentM = 0;
    int combinedSize = n + m;

    for (int i = 0; i < combinedSize; i++)
    {
        if (currentM >= m || (currentN < n && nums1[currentN] < nums2[currentM]))
        {
            combinedNums[i] = nums1[currentN];
            currentN++;
        }
        else
        {
            combinedNums[i] = nums2[currentM];
            currentM++;
        }
    }
}

bool isValidSize(int size)
{
    return size >= 1 && size <= 1000;
}

int main()
{
    int n, m;
    int nums1[1000], nums2[1000];

    cin >> n;
    if (!isValidSize(n))
    {
        cout << "invalid size";
        return 1;
    }
    readArray(nums1, n);

    cin >> m;
    if (!isValidSize(m))
    {
        cout << "invalid size";
        return 1;
    }
    readArray(nums2, m);

    int combinedNums[2000];
    combineArrays(nums1, n, nums2, m, combinedNums);

    printArray(combinedNums, n + m);
    return 0;
}

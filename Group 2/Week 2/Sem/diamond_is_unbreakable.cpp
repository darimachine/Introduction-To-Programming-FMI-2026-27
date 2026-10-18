#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            cout << "*";
        }
        for (int j = N - i; j < N; j++)
        {
            cout << " ";
        }
        for (int j = N - i; j < N ; j++)
        {
            cout << " ";
        }
        for (int j = i; j < N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = N-1; i >= 0; i--)
    {
        for (int j = i; j < N; j++)
        {
            cout << "*";
        }
        for (int j = N - i; j < N; j++)
        {
            cout << " ";
        }
        for (int j = N - i; j < N ; j++)
        {
            cout << " ";
        }
        for (int j = i; j < N; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
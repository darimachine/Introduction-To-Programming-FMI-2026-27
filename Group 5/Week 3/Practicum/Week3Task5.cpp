#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int digit1 = num / 100;
    int digit2 = (num % 100) / 10;
    int digit3 = (num % 10);

    bool areThereEquals = (digit1 == digit2 || digit1 == digit3 || digit2 == digit3);
    cout << boolalpha << areThereEquals << endl;
}
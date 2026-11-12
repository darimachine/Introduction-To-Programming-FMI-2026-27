#include <iostream>
using namespace std;

int main()
{
    int digit1, digit2, digit3;
    cin >> digit1 >> digit2 >> digit3;

    //sort the digits from largest to smallest
    if (digit1 < digit2) {
        swap(digit1, digit2);
    }
    if (digit1 < digit3) {
        swap(digit1, digit3);
    }
    if (digit2 < digit3) {
        swap(digit2, digit3);
    }

    //this way, you generate the biggest possible number
    //case (0,0,0) works too -> 0
    int outputNum = digit1 * 100 + digit2 * 10 + digit3;
    cout << outputNum << endl;
}
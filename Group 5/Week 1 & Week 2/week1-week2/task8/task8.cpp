#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3; 
    cin >> c1 >> c2 >> c3; 

    if ((int(c1) + int(c2) + int(c3)) % 2 == 0) {
        cout << 1;
    } else
        cout << 0; 
}
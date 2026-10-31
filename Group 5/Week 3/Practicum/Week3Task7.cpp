#include <iostream>
using namespace std;

int main()
{
    int a, b, c; //sides of the triangle
    cin >> a >> b >> c;

    bool canFormTriangle = true;
    if ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b))) {
        canFormTriangle = false;
    }

    cout << boolalpha << canFormTriangle << endl;
}
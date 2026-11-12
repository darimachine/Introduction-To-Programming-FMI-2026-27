#include <iostream>
using namespace std; 

int main()
{
    const double PI = 3.14; 
    double d; 
    cin >> d;

    double r = double(d / 2); 

    cout << "S: " << double(PI * r * r) << endl; 
    cout << "P: " << double(2 * PI * r) << endl; 
}

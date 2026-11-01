#include <iostream>
using namespace std; 

int main()
{
    double a = 0.0; 
    double b = 0.0; 

    cout << "A: "; 
    cin >> a; 
    cout << endl; 

    cout << "B: "; 
    cin >> b; 
    cout << endl; 

    b += a; 
    a = b - a; 
    b -= a; 

    cout << "A: " << a << endl; 
    cout << "B: " << b << endl; 
}
#include <iostream>
using namespace std; 

int main()
{
    int n, m;

    cin >> n >> m; 

    cout << "Sum: " << n + m << endl;
    cout << "Subtraction: " << n - m << endl; 
    cout << "Multiplication: " << n * m << endl; 
    if (m != 0) {
        cout << "Division: " << n / m << endl;    
    } else
        cout << "Error! You can't divide by 0!" << endl; 
}
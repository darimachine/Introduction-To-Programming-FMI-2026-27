
using namespace std; 
#include <iostream>

int main()
{
    int n, m;
    cin >> n >> m; 

    int l; 

    l = (n % 100) * 100 + m % 100; 
    cout << l; 
}
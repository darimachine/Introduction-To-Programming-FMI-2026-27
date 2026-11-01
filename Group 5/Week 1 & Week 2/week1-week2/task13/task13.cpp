#include <iostream>
using namespace std; 

int main()
{
	int a, b, c, d; 
	cin >> a >> b >> c >> d; 

	if ((b - a == c - b) && (c - b == d - c))
            cout << 1; 
	else cout << 0; 
}
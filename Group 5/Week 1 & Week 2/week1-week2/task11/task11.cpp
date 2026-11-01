#include <iostream>
using namespace std; 

int main()
{
	int a, b, c, d; 
	cin >> a >> b >> c >> d; 

	if ((c < a || c > b) && (d < a || d > b))
            cout << 0;
        else if ((c >= a && c <= b) || (d >= a && d <= b))
            cout << 1;
        else if (c >= a && c <= b && d >= a && d <= b)
            cout << 2; 
}

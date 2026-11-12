#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

using namespace std;
int main()
{
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	swap(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}

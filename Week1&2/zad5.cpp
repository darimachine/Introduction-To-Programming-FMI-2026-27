#include <iostream>

using namespace std;
int main()
{
	double diameter;
	cin >> diameter;
	double const pi = 3.14;
	double area = pi * diameter * diameter / 4;
	double perimeter = pi * diameter;
	cout << "Area: " << area << endl;
	cout << "Perimeter:" << perimeter << endl;
}
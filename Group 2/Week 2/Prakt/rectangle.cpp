#include <iostream>
using namespace std;
int main() {
	double length, width;
	cin >> length;
	cin >> width;

	double area = length * width;
	double perimeter = 2 * (length + width);
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	return 0;
}
#include <iostream>
using namespace std;

double average(int a, int b, int c) {
	return (a + b + c) / 3.0;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << average(a, b, c);
	return 0;
}
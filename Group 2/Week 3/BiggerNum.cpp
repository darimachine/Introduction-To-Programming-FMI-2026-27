#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << maxOfTwo(a,b);
	return 0;
}
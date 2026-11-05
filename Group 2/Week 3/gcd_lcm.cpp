#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

long long lcm(long long a, long long b) {
	return (a, b) = a / gcd(a, b) * b;
}

int main() {
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b);
	return 0;
}
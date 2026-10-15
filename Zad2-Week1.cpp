#include <iostream>
using namespace std;
int main() {
	int animalsCount;
	int legs;
	cin >> animalsCount;
	cin >> legs;
	if (legs % 2 == 0 && legs>=animalsCount*2 && legs<=animalsCount*4) {
		int cows = (legs - (2 * animalsCount)) / 2;
		cout <<"Cows:"<< cows << endl;
		int chickens = animalsCount - cows;
		cout << "Chickens:" << chickens << endl;
	}
	else {
		cout << "Input parameters are invalid";
	}
	
}
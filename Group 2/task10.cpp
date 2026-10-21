#include <iostream>{

using namespace std;

int main() {

	int a, b , c, d;
	char slash1, slas2;
	cin >> a >> slash1 >> b >> c >> slas2 >> d;

	int denominator = b * d;
	int numerator = a * d + c * b;

	if (denominator < 0) {
		numerator = -numerator;
		denominator = -denominator;
	}

	int newNum = numerator;
	int newDen = denominator;

    while (newDen != 0) {
        int remainder = newNum % newDen;
        newNum = newDen;
        newDen = remainder;
    }
    int nod = newNum; 
    
    numerator = numerator / nod;
    denominator = denominator / nod;

    
    if (denominator == 1) {
       
        cout << numerator << endl;
    }
    else {
        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}

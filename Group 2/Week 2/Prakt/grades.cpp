#include <iostream>
using namespace std;
int main() {
	int points;
	int grade = 0;
	cin >> points;

	if (points < 0 || points > 100) {
		cout << "Invalid points" << endl;
	}
	else {
		if (points >= 0 && points <= 49) {
			grade = 2;
		}
		else if (points >= 50 && points <= 64) {
			grade = 3;
		}
		else if (points >= 65 && points <= 79) {
			grade = 4;
		}
		else if (points >= 80 && points <= 89) {
			grade = 5;
		}
		else if (points >= 90 && points <=100) {
			grade = 6;
		}
	}
	cout << grade << " ";

	switch (grade) {
		case 2:
			cout << "Fail" << endl;
			break;
		case 3:
			cout << "Sufficient" << endl;
			break;
		case 4:
			cout << "Good" << endl;
			break;
		case 5:
			cout << "Very good" << endl;
			break;
		case 6:
			cout << "Exellent" << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
	}

	return 0;
}
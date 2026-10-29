#include <iostream>
using namespace std;

bool year1isLeap( int year1) {

	if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool year2isLeap( int year2) {

	if (year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0) {
		return true;
	}
	else {
		return false;
	}

}

int daysBetween(int day1, int month1, int year1 ,int day2, int month2, int year2) {

	int difference = 0;

	if ( year1 ==  year2 && month1 == month2 && day1 == day2) {
		return difference;
	}
	else{
		if (year1 <= year2) {
			if (month1 != month2) {
				if (month2 < month1) {

					difference += (12 - month1 + month2) * 30;

					for (int i = 1; i <= 12; i++) {

						if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
							difference++;
						}
						else if (i == 2) {
							difference -= 2;
						}
					}

					for (int i = 1; i != month2; i++) {

						if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
							difference++;
						}
						else if (i == 2) {

							if (year1isLeap(year1)) {
								difference -= 1;
							}
							else {
								difference -= 2;
							}
						}
					}
				}
				else if (month1 < month2) {

					difference += (month2 - month1) * 30;

					for (int j = month1; j != month2; j++) {
						if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12) {
							difference++;
						}
						else if (j == 2) {

							if (year1isLeap(year1)) {
								difference -= 1;
							}
							else {
								difference -= 2;
							}
						}
					}
				}
			}

			if (day1 < day2) {
				difference += day2 - day1;
			}
			else if (day1 > day2) {
				difference -= day1 - day2;
			}

			difference += (year2 - year1) * 365;

			if (year2isLeap(year2)){
				difference++;
			}
			else if (year1isLeap(year1)) {
				difference++;
			}
		}
	}
	return difference;
}
int main() {

	int difference;
	int day1, day2, month1, month2, year1, year2;

	cin >> day1 >> month1 >> year1;
	cin >> day2 >> month2 >> year2;

	cout << daysBetween(day1,month1,year1,day2,month2,year2) << endl;
}
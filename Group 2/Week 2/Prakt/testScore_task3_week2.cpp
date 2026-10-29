
#include <iostream>
using namespace std;
int main()
{
	int points;
	cin >> points;
	int grade;
	if (points < 0 || points > 100)
	{
		cout << "Invalid points";
		
	}
	else {
		if (points <= 49)
		{
			grade = 2;
		}
		else if (points >= 59 && points <= 64)
		{
			grade = 3;
		}
		else if (points <= 79) {
			grade = 4;
		}
		else if (points <= 89) {
			grade = 5;
		}
		else {
			grade = 6;
		}
		cout << grade << "  ";

		switch (grade) {
		case 2:
			cout << "Poor";
			break;
		case 3:
			cout << "Average";
			break;
		case 4:
			cout << "Good";
			break;
		case 5:
			cout << "Very Good";
			break;
		case 6:
			cout << "Excellent";
			break;
		}
	}
	return 0;
	
}


#include <iostream>

using namespace std;
int main()
{
	int seconds;
	cin >> seconds;
	int days = seconds / 86400;
	seconds %= 86400;
	int hours = seconds / 3600;
	seconds %= 3600;
	int minutes = seconds / 60;
	seconds %= 60;
	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}
#include <iostream>

void calculateTime(int hour, int minutes, int time, int& latestHour, int& latestMinute)
{
	minutes += time;
	int additionalHours = minutes / 60;
	if (additionalHours > 0)
	{
		hour += additionalHours;
	}
	if (hour >= 24)
	{
		hour = hour - 24;
	}
	if (minutes > 60)
	{
		minutes %= 60;
	}
	if (hour > latestHour)
	{
		latestHour = hour;
		latestMinute = minutes;
	}
	else if (hour == latestHour && minutes > latestMinute)
	{
		latestMinute = minutes;
	}
}

using namespace std;
int main()
{
	int count, hour, minutes, time;
	int latestHour = 0, latestMinute = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> hour >> minutes >> time;
		calculateTime(hour, minutes, time, latestHour, latestMinute);
	}
	cout << latestHour << " " << latestMinute << endl;
}


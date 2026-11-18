#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sort3(int& min, int& mid, int& max)
{
	if (min > mid)
	{
		swap(min, mid);
	}
	if (min > max)
	{
		swap(min, max);
	}
	if (mid > max)
	{
		swap(mid, max);
	}
}

int main()
{
	int min, mid, max;
	cin >> min >> mid >> max;
	sort3(min, mid, max);
	cout << min << " " << mid << " " << max << endl;
}

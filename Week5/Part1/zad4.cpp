#include <iostream>

int toNumber(char symbol)
{
	return symbol - '0';
}

char toCharacter(int number)
{
	return number + '0';
}

using namespace std;
int main()
{
	cout << toNumber('1') << endl;
	cout << toCharacter(3) << endl;
}


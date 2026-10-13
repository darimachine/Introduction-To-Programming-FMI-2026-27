// zadacha 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace  std;


int main()
{
	try {

		int jiv;
		cin >> jiv;
		int kraka;
		cin >> kraka;

		int ckravi = 0;
		int ckokoshki = 0;

		if (kraka < 2 * jiv || kraka > 4 * jiv || kraka % 2 != 0)
		{
			throw runtime_error("Error: Invalid input");
		}

		ckravi = (kraka - 2 * jiv) / 2;
		ckokoshki = jiv - ckravi;

		cout << "Number of cows: " << ckravi << endl;
		cout << "Number of chickens: " << ckokoshki << endl;


	}
	catch (const runtime_error& e) {
		cerr << e.what() << endl;
	}
}



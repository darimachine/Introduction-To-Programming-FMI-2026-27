// zadachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	try {
		cout << "Enter first number : ";
		int m;
		cin >> m;
		cout << "Enter second number : ";
		int n;
		cin >> n;


		
		cout << m << " + " << n << " = " << m + n << endl;
		cout << m << " - " << n << " = " << m - n << endl;
		cout << m << " * " << n << " = " << m * n << endl;
		if (n == 0)
		{
			throw runtime_error("Error: Cannot divide by 0");
		}
		cout << m << " / " << n << " = " << (double)m / (double)n << endl;
		cout << m << " % " << n << " = " << m % n << endl;
	}
	catch (const runtime_error& e) {
		cerr << e.what() << endl;
	}	
}


#include <iostream>

int power(int base, unsigned int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return result;
}

int squareRoot(int number)
{
	if (number <= 0)
	{
		return 0;
	}
	int root = 1;
	while (root * root <= number)
	{
		if (root * root == number)
		{
			return root;
		}
		root++;
	}
	return 0;
}

int calculatingSide(int xa, int ya, int xb, int yb)
{
	int sideSquared = power(xb - xa, 2) + power(yb - ya, 2);
	int side = squareRoot(sideSquared);
	return side;
}

int getPerimeter(int xa, int ya, int xb, int yb, int xc, int yc)
{
	int sideAB = calculatingSide(xa, ya, xb, yb);
	int sideBC = calculatingSide(xb, yb, xc, yc);
	int sideCA = calculatingSide(xc, yc, xa, ya);
	return sideAB + sideBC + sideCA;
}

int getArea(int xa, int ya, int xb, int yb, int xc, int yc)
{
	int sideAB = calculatingSide(xa, ya, xb, yb);
	int sideBC = calculatingSide(xb, yb, xc, yc);
	int sideCA = calculatingSide(xc, yc, xa, ya);
	int semiPerimeter = (sideAB + sideBC + sideCA) / 2;
	int areaSquared = semiPerimeter * (semiPerimeter - sideAB) * (semiPerimeter - sideBC) * (semiPerimeter - sideCA);
	int area = squareRoot(areaSquared);
	return area;
}

using namespace std;
int main()
{
	int xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	cout << getPerimeter(xa, ya, xb, yb, xc, yc);
	cout << getArea(xa, ya, xb, yb, xc, yc);
}


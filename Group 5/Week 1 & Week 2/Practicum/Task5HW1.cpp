// Task5HW1.cpp : Calculate the circumference and the area of a circle
// Group 5

#include <iostream>
using namespace std;

int main()
{
    double diameter;
    cin >> diameter;

    double radius = diameter / 2;
    double const PI = 3.14;

    cout << "Circumference: " << (radius * PI * 2) << endl;
    cout << "Area: " << (radius * radius * PI) << endl;
}

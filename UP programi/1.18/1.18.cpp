// 1.18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int animals;
    int legs;
    int cows;
    int chickens;

    cin >> animals;
    cin >> legs;


    if (legs % 2 != 0 || legs < 0 || animals < 0 || legs < animals * 2) 
    {
        cout << "Invalid input brat";
        return 0;
    }

    cows = (legs - (2 * animals)) / 2;
    chickens = animals - cows;

    cout << "Cows: " << cows << endl;
    cout << "Chickens " << chickens;

    //Задачата няма примерен вход и изход, но се нядявам да сте имали в предвид това което съм направил
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

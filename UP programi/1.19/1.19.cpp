// 1.19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    int numMin;
    int numMax;
    int numStart;
    int change;
    int excess;

    cin >> numMin >> numMax >> numStart >> change;

    numStart += change;


    do {
        excess = 0;
        if (numStart > numMax)
        {
            excess = numStart - numMax;
            numStart = numMin + excess - 1;
        }
        else if (numStart < numMin)
        {
            excess = numMin - numStart;
            numStart = numMax - excess + 1;
        }
    } while (excess != 0);
    
     

    cout << numStart;
    
    //Не знам как се прави с ASCII символи

    
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

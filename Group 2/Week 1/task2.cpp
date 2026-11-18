
#include <iostream>
using namespace std;


int main()
{
    int animals,legs;
    cin >> animals;
    cin >> legs;
    if (legs % 2 != 0||legs < 2 * animals||legs > 4 * animals)
    {
        cout << "Input parameters are invalid\n";
    }
    else
    {
        int cows = (legs - 2 * animals);
        cows = cows / 2;
        int chickens = animals - cows;
        cout << "Cows: " << cows <<"\n";
        cout << "Chickens: " << chickens <<"\n";
    }

}


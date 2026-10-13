
#include <iostream>

int main()
{
    int animals;
    int legs;
    std::cin >> animals;
    std::cin >> legs;

    if (legs % 2 == 0 && legs>=animals * 2 && legs<=animals * 4)
    {
        int cows = legs / 2 - animals;
        int chickens = animals - cows;
        std::cout << "Cows: " << cows << '\n' << "Chickens: " << chickens;
    }
    else std::cout << "Input parameters are invalid";
}
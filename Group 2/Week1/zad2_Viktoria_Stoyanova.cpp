

#include <iostream>

int main()
{
    int animals;
    int legs;
    std::cin >> animals;
    std::cin >> legs;
    if (legs % 2 == 1 || legs > animals * 4 || animals * 2 > legs)
    {
        std::cout << "Error";
        return 0;
    }
    int chic = (4 * animals - legs) / 2;
    int cows = animals - chic;
    std::cout << "Chic: " << chic << std::endl;
    std::cout << "Cows: " << cows;
}


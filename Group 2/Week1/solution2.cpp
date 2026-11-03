#include <iostream>

int main() {

    int cows, chickens;
    int legs, heads;
    
    std::cin >> heads;
    std::cin >> legs;

    // cows + chickens = heads
    // 2 * cows + chickens = legs/2
    // heads + cows = legs/2 => cows = legs/2 - heads => chickens = heads - cows
    cows = (legs / 2) - heads;
    chickens = heads - cows;

    if(cows < 0 || chickens < 0) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    std::cout << "Cows: " << cows << std::endl;
    std::cout << "Chickens: " << chickens << std::endl;

    return 0;
}
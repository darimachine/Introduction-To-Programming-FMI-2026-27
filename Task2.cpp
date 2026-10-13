#include <iostream>

int main() {
    int totalAnimals, legsCount;

    std::cin >> totalAnimals;
    std::cin >> legsCount;

    int cows = legsCount / 4;
    int chickens = (legsCount % 4) / 2;

    if (cows + chickens < totalAnimals) {
        int difference = totalAnimals - (cows + chickens);
        cows -= difference;
        chickens += difference * 2;
    }

    if (cows >= 0 && chickens >= 0 &&
        cows + chickens == totalAnimals &&
        cows * 4 + chickens * 2 == legsCount) {
        std::cout << "Cows: " << cows << std::endl;
        std::cout << "Chickens: " << chickens << std::endl;
    }
    else {
        std::cout << "Input parameters are invalid" << std::endl;
    }

}
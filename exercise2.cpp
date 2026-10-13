#include <iostream>

int main() {

	int totalAnimals;
	std::cin >> totalAnimals;

	int totalLegs;
	std::cin >> totalLegs;


	if (totalLegs % 2 == 0 && totalLegs >= totalAnimals * 2 && totalAnimals * 4 >= totalLegs) {

		int cows = (totalLegs - totalAnimals * 2) / 2;
		int chickens = totalAnimals - cows;

		std::cout << "Chickens: " << chickens << std::endl;
		std::cout << "Cows: " << cows << std::endl;

	}
	else {
		std::cout << "Input parameters are invalid" << std::endl;

	}


}
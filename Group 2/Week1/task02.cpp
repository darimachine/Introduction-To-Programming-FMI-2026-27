#include <iostream>

int main() {
	int animalCnt, legCnt;
	std::cin >> animalCnt >> legCnt;
	int cowCnt = legCnt / 2 - animalCnt;
	int chickenCnt = 2 * animalCnt  - legCnt / 2;
	if (legCnt % 2 != 0 || cowCnt < 0 || chickenCnt < 0) {
		std::cout << "Input parameters are invalid" << '\n';
		return 0;
	}
	std::cout << "Cows: " << cowCnt << '\n';
	std::cout << "Chicken: " << chickenCnt << '\n';
	return 0;
}

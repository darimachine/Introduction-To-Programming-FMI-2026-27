#include <iostream>

int main() {
    int num = 0; // -2^31 до 2^31-1

    std::cout << "x = ";
    std::cin >> num;

    //Aldi tax 

    // while(std::cin.fail()) {
    //     // Clear cin buffer
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //     std::cout << "Грешна входна информация. Въведи цяло число: ";

    //     std::cin >> num;
    // }

    if(num<0) { // Ако трябва да се извежда и обяснение като в примера това не трябва да е тук.
       std::cout << "false" << std::endl;
       return 0;
    } else if(num<10) { // Предполагам че и цифрите се броят за палиндроми
       std::cout << "true" << std::endl;  
       return 0;
    }

    int temp = num;
    int mirror = 0;
    while(true) {
        if(temp == 0) { break; }
        mirror += temp%10;
        mirror *= 10;
        temp /= 10;
    }
    mirror /= 10; // Remove trailing 0;

    if((mirror-num)==0) {
        std::cout << "true" << std::endl;  
        return 0;
    } else {
        std::cout << "false" << std::endl;
        return 0;
    }
    return 0;
}
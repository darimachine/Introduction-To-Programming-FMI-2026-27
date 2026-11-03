#include <iostream>

int main() {
    
    int range;
    int operations = 0;
    int current_operations = 0;
    int number = 0;
    long long x;
    
    bool valid_input = 0;
    while(!valid_input) {
        std::cin >> range; 
        if(range > 1000000 || range < 1) { std::cout << "Входящата стойност трябва да е в интервала [1, 1 000 000]. " << std::endl; continue; }

        valid_input = 1;
    }

    // Такива решения причиняват жестоки страдания на човечеството, затова добрите хора са измислили хеш таблиците,
    // но до тогава ще си пострадат очите ни...

    for(int i = 1; i <= range; ++i) {
        x = i;

        while(x!=1) {
            if(x%2==0) { x/=2; ++current_operations; }
            else { x = x*3 + 1; ++current_operations; }
        }

        if(current_operations > operations) { operations = current_operations; number = i; }

        current_operations = 0;
    }

    std::cout << number << " " << operations << std::endl;
    return 0;
}
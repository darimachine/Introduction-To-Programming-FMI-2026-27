#include <iostream>

int main() {
    char* input = new char [128]; // Can hold a number of 128 digits, more than enough (maybe?)
    
    unsigned long mirror = 0;
    int sum = 0;
    int digit_count = 0;
    char largest_digit = '0';

    bool valid_input = false;
    while (!valid_input) {
        std::cout << "Въведи цяло позитивно число: ";
        std::cin >> input;
        
        //Assume that input is valid
        valid_input = true;
        int i = 0;
        if(*(input) == '-') { std::cout << "Грешна входяща информация. "; continue; }
        for (; input[i] != '\0'; i++) {
            if (!isdigit(*(input + i))) {
                std::cout << "Грешна входяща информация. ";
                valid_input = false;
                break;
            }
            int current_digit = input[i] - '0';

            digit_count++;
            sum += current_digit;
            mirror += current_digit * std::pow(10, i);
            if(*(input+i)>largest_digit) largest_digit = *(input+i);
        }
    }
    std::cout << "Брой цифри: " << digit_count << std::endl;
    std::cout << "Сбор: " << sum << std::endl;
    std::cout << "Обърнато: " << mirror << std::endl;
    std::cout << "Най-голяма цифра: " << largest_digit << std::endl;
    
    return 0;

}
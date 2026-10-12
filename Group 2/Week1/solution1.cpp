#include <iostream>

char validate_numerical_inuput(char* input, int* number);
void request_numerical_input(char* input, const char* prompt);

int main() {
    int num1, num2;
    char* input = new char[256];
    while(true) {
        request_numerical_input(input, "Enter first number: ");
        if(validate_numerical_inuput(input, &num1) == '0') {
            break; // Valid input
        }
        std::cout << "Invalid input." << std::endl;
    }

   while(true) {
        request_numerical_input(input, "Enter second number: ");
        if(validate_numerical_inuput(input, &num2) == '0') {
            break; // Valid input
        }
        std::cout << "Invalid input." << std::endl;
    }

    if(num2 == 0) {
        fprintf(stdout, "Error: Tried to divide by zero.\n");
        return 1;
    }
    fprintf(stdout, "%d + %d = %d\n", num1, num2, num1 + num2);
    fprintf(stdout, "%d - %d = %d\n", num1, num2, num1 - num2);
    fprintf(stdout, "%d * %d = %d\n", num1, num2, num1 * num2);
    fprintf(stdout, "%d / %d = %.1f\n", num1, num2, (double)(num1) / (double)(num2));
    fprintf(stdout, "%d %% %d = %d\n", num1, num2, num1 % num2);
    
    return 0;
}

char validate_numerical_inuput(char* input, int* number) {
    if(input == nullptr || number == nullptr) {
        return '1'; // Invalid input
    }
    size_t index = 0;
    while(*(input + index) != '\0') {
        if(*(input + index) < '0' || *(input + index) > '9') {
            return '1'; // Invalid input
        } 
        *number = *(input + index) - '0'; // Convert char to int
        *number *= 10; // Shift power of ten
        index++;
    }
    if(*number != 0) {
        *number /= 10; 
    }
    return '0'; // Valid input
}
void request_numerical_input(char* input, const char* prompt) {
    if(input == nullptr || prompt == nullptr) {
        return;  // Invalid input
    }
    std::cout << prompt; 
    std::cin >> input;
}
#include <iostream>


char validate_numerical_inuput(char* input, int* number);
void request_numerical_input(char* input, const char* prompt);
void input_loop(char* input, int* number, const char* prompt);

int main() {
    int num1, num2;

    char* input = new char[256];

    input_loop(input, &num1, "Enter first number: ");
    input_loop(input, &num2, "Enter second number: ");

    
    fprintf(stdout, "%d + %d = %d\n", num1, num2, num1 + num2);
    fprintf(stdout, "%d - %d = %d\n", num1, num2, num1 - num2);
    fprintf(stdout, "%d * %d = %d\n", num1, num2, num1 * num2);

    if(num2 == 0) { fprintf(stdout, "Error: Tried to divide by zero.\n"); }
    else { fprintf(stdout, "%d / %d = %.1f\n", num1, num2, (double)(num1) / (double)(num2));}

    fprintf(stdout, "%d %% %d = %d\n", num1, num2, num1 % num2);
    
    delete[] input; // Deconstruct and free allocated memory
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
void input_loop(char* input, int* number, const char* prompt) {
    while(true) {
        request_numerical_input(input, prompt);
        if(validate_numerical_inuput(input, number) == '0') {
            break; // Valid input
        }
        std::cout << "Invalid input." << std::endl;
    }
}
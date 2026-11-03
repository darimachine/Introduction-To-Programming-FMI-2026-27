#include <iostream>

// ------------------------ DECLARATIONS ------------------------

#define llong long long

// Since the range is from 0 to 500000, it is much easier 
// to just store the powers of two that would be used to 
// express any number up to that point in binary. 
// This is probably true in any case but still.

// This is not good for the eyes...
// -----------------------------------------------
//           2^           |- 3k -- 3k+1 -- 3k+2 -|
const int pows_of_two[] = { 1,     2,     4, 
                            8,     16,    32, 
                            64,    128,   256, 
                            512,   1024,  2048, 
                            4096,  8192,  16384, 
                            33768, 65536, 131072,
                            262144 };
// Non-mutable, just for arithmetic purposes
// -----------------------------------------------

bool validate_input(int integer);
bool validate_input(unsigned llong binary);
void read_input(unsigned llong& dest, char& mode);
void convert(llong& dest, llong src, char mode);
void clear_input_stream();

llong decimal_to_binary(int integer);
int binary_to_decimal(llong binary);

// ---------------------------- MAIN ----------------------------

int main() {
    char mode;                 
    unsigned llong input;
    llong dest;

    read_input(input, mode);
    convert(dest, input, mode);

    std::cout << dest << std::endl;

    return 0;
}

// ----------------------- IMPLEMENTATIONS -----------------------

bool validate_input(int integer) {
    if(integer < 0 || integer > 500000) return false;

    return true;
}
bool validate_input(unsigned llong binary) {

    // ----------------- NOTE -----------------
    // The condition for i to be less than 19
    // is because a llong can hold a number
    // with at most 19 digits. Conveniently,
    // the largest 19 digit binary number is
    // 524 287, matching roughly the other
    // input's upper boundary.
    // ----------------------------------------

    int digit;

    for(int i = 0; i < 19; i++) {
        digit = binary % 10;

        if(digit != 0 && digit != 1) return false;

        binary /= 10;
    }

    // Input goes beyond specified upper boundary
    if(binary != 0) return false;

    return true;
}

void read_input(unsigned llong& dest, char& mode) {
    
    // Instructions
    std::cout << "\nEnter conversion mode [ d | b ], followed by:\n"
    " b | an integer in range [0, 500000];\n"
    " d | an unsigned binary number up to 19 digits;\n" << std::endl;

    bool valid_input = false;
    while(!valid_input) {

        std::cin >> mode >> dest;

        if(mode == 'b' || mode == 'B') {
            while(!(valid_input = validate_input((int)dest))) {
                std::cout << std::endl << "! Invalid input. [B] Try again: ";

                // clear_input_stream();
                std::cin >> dest;

            }
        } else if(mode == 'd' || mode == 'D') {
            while(!(valid_input = validate_input(dest))) {
                std::cout << std::endl << "! Invalid input. [D] Try again: ";
                
                // clear_input_stream();
                std::cin >> dest;

            }
        } else {
            std::cout << std::endl << "! No such mode '" << mode << "'. Retry: ";
            // clear_input_stream();
        }
    }

}

void convert(llong& dest, llong src, char mode) {
    switch(mode) {
        case 'b':
            dest = decimal_to_binary((int)src);
            break;
        case 'd':
            dest = (int)binary_to_decimal(src);
            break;
        default:
            break;
    }
}

// Prevents user from bricking the program's input reading
// by overflowing llong with large inputs and getting cin
// stuck with fail state flag raised.
// void clear_input_stream() {
//     std::cin.clear();
//     std::cin.ignore(10000, '\n');
// }

llong decimal_to_binary(int integer) {
    llong binary = 0;

    int i = sizeof(pows_of_two)/4;
    if(integer < pows_of_two[sizeof(pows_of_two)/8]) i /= 2;

    for(; i > 0; --i) {

        // ---------------------------- NOTE ----------------------------
        // This loop goes from the largest power of two (or pivots) down
        // and checks if the input integer is larger than it. If that 
        // is true a 1 is added at the appropriate index. Then, 
        // the largest power of two that is smaller than the provided 
        // integer is subtracted so that the process can repeat until
        // said integer is 0;
        // --------------------------------------------------------------

        binary *= 10;

        if(integer/pows_of_two[i-1]) {
            binary++;
            integer -= pows_of_two[i-1];
        }
        // Alternatively
        // binform = integer & 1;
        // integer = integer >> 1;
    }

    return binary;
}

int binary_to_decimal(llong binary) {
    int integer = 0;

    if(!binary) return 0;

    for(int i = 0; binary > 0; i++) {
        integer += (binary % 10) * pows_of_two[i];

        binary /= 10;
    }
    return integer;
}
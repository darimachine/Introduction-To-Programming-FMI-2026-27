#include <iostream>

#define llong long long

// -----------------------------------------------------------------
// Using standard variable types, the largest
// power of two within the given range is 2^30
// since our range is one less than 2^31 which
// would otherwise be largest.

const llong U_BOUNDARY = 2147483647;
const llong L_BOUNDARY = -214783648;
const llong SUPERIOR_POW_OF_TWO = 4294967296;
// -----------------------------------------------------------------
// Any power of two is only divisible by other powers of two.
// Because a maximum and a minimum for the input value are provided,
// it is not necessary to do any arithmetic operations beyond just
// dividing the constant by the input and checking if the remainder
// is greater than 0.

bool is_power_of_two(llong input);
bool read_numeric_input(llong &input);
// -----------------------------------------------------------------

int main() {
    llong input;

    // ---------- Input loop ----------
    while(!read_numeric_input(input)) {
        std::cout << "Invalid input. ";
    }

    if(is_power_of_two(input)) {
        std::cout << input << " is a power of two" << std::endl;
    }
    else {
        std::cout << input << " is not a power of two" << std::endl;
    }
    return 0;
}

// --------------------------------- Implementation ---------------------------------

bool read_numeric_input(llong &input) {
    // This function just checks the input against the given range.

    std::cout << "Enter a number in range [-2147483648, 2147483647]: n = ";
    std::cin >> input;

    if(input < L_BOUNDARY || input > U_BOUNDARY) return false;
    else return true;
}
bool is_power_of_two(llong input) {
    // Shouldn't need to check if it is only called after validation

    // No point in performing division with a large number
    // for any input that cannot be a power of two
    if(input%2 != 0) return false;

    if(SUPERIOR_POW_OF_TWO % input == 0) return true;
    else return false;
}
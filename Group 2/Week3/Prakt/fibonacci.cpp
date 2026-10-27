#include <iostream>

void read_and_validate(int& n);
int fib_at(int index);

int main() {
    int n;

    read_and_validate(n);
    std::cout << fib_at(n) << std::endl;

    return 0;
}
void read_and_validate(int& n) {

    bool valid_input = 0;
    while(!valid_input) {
        std::cin >> n;
        
        if(n <= 0) {
            std::cout << "Input must not be 0" << std::endl;
            continue;
        }

        valid_input = 1;
    }
}
int fib_at(int index) {

    // -------------------------------- NOTE --------------------------------
    // This function calls itself until it is called with index 0,
    // visually this represents a staircase of calls, which then resolve
    // or 'unravel' additively backwards from the top, like a cascade.
    // At its last step in the recursion, index should be 0, which is also
    //
    // the start of the fibonacci sequence.
    //    first fib number ->_
    //                     _|
    //                   _|
    //                 _|
    //        fib n ->|
    // ----------------------------------------------------------------------

    if(index <= 0) return 0; // Highest step of recursion
    if(index == 1) return 1; // Second-to-last step of recursion


    return fib_at(index - 1) + fib_at(index - 2);
}
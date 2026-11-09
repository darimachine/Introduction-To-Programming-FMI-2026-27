#include <cmath>
#include <iostream>

void countDigits(int num) {
    int counts[10] = {};

    for (int currNum = abs(num); currNum > 0; currNum /= 10) {
        int digit = currNum % 10;
        counts[digit]++;
    }

    for (int digit = 0; digit < 10; digit++) {
        std::cout << "digit " << digit << ": " << counts[digit] << "x"
                  << std::endl;
    }
}

int main() {
    countDigits(1239252945);

    return 0;
}

#include <cstdlib>
#include <ctime>

double randomDouble() {
    return rand() / (double)RAND_MAX;
}

bool randomBool() {
    return rand() % 2 == 0;
}

int randomIntBetween0And(int max) {
    return rand() % (max + 1);
}

int randomIntBetween(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0));

    // ...

    return 0;
}

#include <iostream>

const int MAX_ROW_SIZE = 25;
const int MAX_COLUMN_SIZE = 25;

void solution_0_1();
void solution_0_2();
void solution_0_3(const int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE], const int sizeRows, const int sizeColumns);
void solution_1();
void solution_2();
void solution_3_1();
void solution_3_2();
void solution_4();


int main() {

    return 0;
}

void solution_0_1() {

    int sizeRows = -1;
    int sizeColumns = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> sizeRows >> sizeColumns;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cin >> numbers[i][j];
        }
    }


    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cout << numbers[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void solution_0_2() {

    int k = -1;
    int sizeRows = -1;
    int sizeColumns = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> sizeRows >> sizeColumns;
    std::cin >> k;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cin >> numbers[i][j];
        }
    }

    int foundIndexI = -1;
    int foundIndexJ = -1;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            if (numbers[i][j] == k) {

                foundIndexI = i;
                foundIndexJ = j;
                break;
            }
        }

        if (foundIndexI != -1) break;
    }

    if (foundIndexI != -1) std::cout << k << " is at [" << foundIndexI << "][" << foundIndexJ << "]";
    else std::cout << "element isn't in the array";
}

void solution_0_3(const int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE], const int sizeRows, const int sizeColumns) {

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cout << numbers[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void solution_1() {

    int sizeRows = -1;
    int sizeColumns = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> sizeRows >> sizeColumns;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < sizeRows; i += 2) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cout << numbers[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void solution_2() {

    int k = -1;
    int sizeRows = -1;
    int sizeColumns = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> sizeRows >> sizeColumns;
    std::cin >> k;

    if (sizeRows < 1 || sizeRows > 25) return;
    if (sizeColumns < 1 || sizeColumns > 25) return;
    if (k < 1 || k > sizeColumns) return;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < sizeRows; i++) {

        std::cout << numbers[i][k - 1] << std::endl;
    }
}

void solution_3_1() {

    int size = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> size;

    if (size < 1 || size > 25) return;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            std::cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < size; i++) {

        std::cout << numbers[i][i] << " ";
    }
}

void solution_3_2() {

    int size = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    std::cin >> size;

    if (size < 1 || size > 25) return;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            std::cin >> numbers[i][j];
        }
    }

    for (int i = 0; i < size; i++) {

        std::cout << numbers[i][size - 1 - i] << " ";
    }
}

void solution_4() {

    int sizeRows = -1;
    int sizeColumns = -1;

    int numbers[MAX_ROW_SIZE][MAX_COLUMN_SIZE] = {};

    int targetIndexRows = -1;
    int targetIndexColumns = -1;

    std::cin >> sizeRows >> sizeColumns;
    std::cin >> targetIndexRows >> targetIndexColumns;

    if (sizeRows < 1 || sizeRows > 25) return;
    if (sizeColumns < 1 || sizeColumns > 25) return;
    if (targetIndexRows < 1 || targetIndexRows > sizeRows) return;
    if (targetIndexColumns < 1 || targetIndexColumns > sizeColumns) return;

    for (int i = 0; i < sizeRows; i++) {

        for (int j = 0; j < sizeColumns; j++) {

            std::cin >> numbers[i][j];
        }
    }

    // making it zero based
    targetIndexRows--;
    targetIndexColumns--;

    // up-left
    if ((targetIndexRows - 1) >= 0 && (targetIndexColumns - 1) >= 0) {

        std::cout << numbers[targetIndexRows - 1][targetIndexColumns - 1] << " ";
    }

    // up
    if ((targetIndexRows - 1) >= 0) {

        std::cout << numbers[targetIndexRows - 1][targetIndexColumns] << " ";
    }

    // up-right
    if ((targetIndexRows - 1) >= 0 && (targetIndexColumns + 1) < sizeColumns) {

        std::cout << numbers[targetIndexRows - 1][targetIndexColumns + 1] << " ";
    }

    // going to the row below
    std::cout << std::endl;

    // left
    if ((targetIndexColumns - 1) >= 0) {

        std::cout << numbers[targetIndexRows][targetIndexColumns - 1] << " ";
    }

    // center
    std::cout << numbers[targetIndexRows][targetIndexColumns] << " ";

    // right
    if ((targetIndexColumns + 1) < sizeColumns) {

        std::cout << numbers[targetIndexRows][targetIndexColumns + 1] << " ";
    }

    // going to the row below
    std::cout << std::endl;

    // down-left
    if ((targetIndexRows + 1) < sizeRows && (targetIndexColumns - 1) >= 0) {

        std::cout << numbers[targetIndexRows + 1][targetIndexColumns - 1] << " ";
    }

    // down
    if ((targetIndexRows + 1) < sizeRows) {

        std::cout << numbers[targetIndexRows + 1][targetIndexColumns] << " ";
    }

    // down-right
    if ((targetIndexRows + 1) < sizeRows && (targetIndexColumns + 1) < sizeColumns) {

        std::cout << numbers[targetIndexRows + 1][targetIndexColumns + 1] << " ";
    }
}
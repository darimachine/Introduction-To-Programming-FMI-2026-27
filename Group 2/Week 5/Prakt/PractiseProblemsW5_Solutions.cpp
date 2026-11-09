#include <iostream>

int solution_0(const int numbers[], const int size, const int k);
void solution_1(const int numbers[], const int size);
void solution_2_1(const int numbers[], const int size);
void solution_2_2(const int numbers[], const int size);
bool solution_3(const int numbers[], const int size);
void solution_4(int numbers[], const int size);
int solution_5_1(const int numbers[], const int size, const int k);
void solution_5_2(const int numbers[], const int size);
void solution_6(int numbers[], const int size);

int main() {


    return 0;
}

int solution_0(const int numbers[], const int size, const int k) {

    if (numbers == nullptr) return -1;
    if (size <= 0) return -1;

    for (int i = 0; i < size; i++) {

        if (numbers[i] == k) return i;
    }

    return -1;
}

void solution_1(const int numbers[], const int size) {

    if (numbers == nullptr) return;
    if (size <= 0) return;

    bool isGrowing = true;
    bool isShrinking = true;

    if (size == 1) {

        std::cout << "neither";
        return;
    }

    for (int i = 1; i < size; i++) {

        if (numbers[i - 1] == numbers[i]) continue;
        if (numbers[i - 1] < numbers[i]) isShrinking = false;
        if (numbers[i - 1] > numbers[i]) isGrowing = false;

        if (!isGrowing && !isShrinking) break;
    }

    if (isGrowing && isShrinking) {
        std::cout << "both";
        return;
    }
    if (!isGrowing && !isShrinking) {
        std::cout << "neither";
        return;
    }
    if (isGrowing) {
        std::cout << "growing";
        return;
    }

    // since we've checked every other possibility, here we know that the array is shrinking for sure
    std::cout << "shrinking";
}

void solution_2_1(const int numbers[], const int size) {

    if (numbers == nullptr) return;
    if (size < 1) return;

    // since the max possible value is 10 000, then we have to allocate 10 001 elements,
    // so that each element has a matching index(because array indexes start from 0)
    int counts[10001] = {0};

    int max = numbers[0];
    for (int i = 0; i < size; i++) {

        if (numbers[i] > max) max = numbers[i];

        // updating the count on the index, corresponding to the value,
        // value is at numbers[i], so we update at counts[numbers[i]]
        counts[numbers[i]]++;
    }

    for (int i = 0; i <= max; i++) {

        if (counts[i] == 0) continue;
        std::cout << i << ": " << counts[i] << std::endl;
    }
}

void solution_2_2(const int numbers[], const int size) {

    if (numbers == nullptr) return;
    if (size <= 0) return;

    // since the max possible value is 10 000, then we have to allocate 10 001 elements,
    // so that each element has a matching index(because array indexes start from 0)
    int counts[10001] = {0};

    int max = numbers[0];
    for (int i = 0; i < size; i++) {

        if (numbers[i] > max) max = numbers[i];

        counts[numbers[i]]++;
    }

    for (int i = 0; i <= max; i++) {

        for (int j = 0; j < counts[i]; j++) {

            std::cout << i << " ";
        }
    }
}

bool solution_3(const int numbers[], const int size) {

    if (numbers == nullptr) return false;
    if (size <= 0) return false;

    int halfSize = size / 2;
    for (int i = 0; i < halfSize; i++) {

        // comparing the first to the last, the second to the second to last and so on
        if (numbers[i] != numbers[size - 1 - i]) return false;
    }

    return true;
}

void solution_4(int numbers[], const int size) {

    // NOTE
    // the array numbers has an empty element in the beginning
    // so the number 123 is represented as [0, 1, 2, 3]
    // or the number 9999 is represented as [0, 9, 9, 9, 9]

    if (numbers == nullptr) return;
    if (size <= 0) return;

    // if we have to carry one to the next digit carry will be true, otherwise - false
    bool carry = false;

    for (int i = size - 1; i >= 1; i--) {

        // if the digit is less than 9 we just increment the digit and we're done
        if (numbers[i] <= 8) {

            numbers[i]++;
            carry = false;
            break;
        }

        // otherwise(here we know for sure that the digit must be 9) we turn on the carry flag and set digit to 0
        numbers[i] = 0;
        carry = true;
    }

    // after the loop is over we check the carry
    // if here carry is true, then that means that we've carried the additional one all the way to the first digit
    // this will happen when the initial number is 9, 99, 999, 9999...
    // because of that we must set the empty zero index(that is left intentionally empty beforehand) to 1
    if (carry) numbers[0] = 1;

    // printing the digits, but first checking if the digit at index 0
    // we print it only if it isn't 0
    if (numbers[0] != 0) std::cout << numbers[0] << " ";
    for (int i = 1; i < size; i++) {

        std::cout << numbers[i] << " ";
    }
}

int solution_5_1(const int numbers[], const int size, const int k) {

    if (numbers == nullptr) return -1;
    if (size <= 0) return -1;

    int cnt = 0;

    // here we chose an element as a pivot, to which we compare all the rest
    // because of that way of traversal we guarantee that we want count a combination twice
    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {

            // if the pivot and an element after it add up to k, then we have a new combination
            if (numbers[i] + numbers[j] == k) cnt++;
        }
    }

    return cnt;
}

void solution_5_2(const int numbers[], const int size) {

    if (numbers == nullptr) return;
    if (size <= 0) return;

    // the whole point of this problem is applying the logic in 5.1 for finding the combinations
    // and then using the counting sort from 2.2 to sort the elements
    int count[10001];

    int max = numbers[0];
    for (int i = 0; i < size; i++) {

        // if we've already calculated the combinations for the value at numbers[i] we skip it
        // this way if we have for example two 4 in the input array, we won't calculate the combinations for it twice
        if (count[numbers[i]] != 0) continue;

        if (numbers[i] > max) max = numbers[i];
        int sum = numbers[i];

        // here we are using the same logic from 5.1, but with a slight modification, because we cannot include
        // the sum(numbers[i]) in the combinations
        for (int j = 0; j < size - 1; j++) {

            // cannot include the sum in the combination
            if (j == i) continue;

            for (int q = j + 1; q < size; q++) {

                // cannot include the sum in the combination
                if (q == i) continue;

                if (numbers[j] + numbers[q] == sum) count[sum]++;
            }
        }
    }

    // printing the sorted array
    for (int i = 0; i <= max; i++) {

        if (count[i] == 0) continue;
        std::cout << i << ": " << count[i] << std::endl;
    }
}

// we delegate the swapping logic into a separate function
void swap(int& number1, int& number2) {

    int temp = number1;
    number1 = number2;
    number2 = temp;
}

void solution_6(int numbers[], const int size) {

    if (numbers == nullptr) return;
    if (size <= 0) return;

    // this index will point to the leftmost 0 in the array
    int indexLeftmostZero = 0;

    for (int i = 0; i < size; i++) {

        // if we've found a non-zero element we swap it with the leftmost zero and move the pointer to the right
        if (numbers[i] != 0) {

            swap(numbers[i], numbers[indexLeftmostZero]);
            indexLeftmostZero++;
        }
    }

    for (int i = 0; i < size; i++) {

        std::cout << numbers[i] << " ";
    }
}

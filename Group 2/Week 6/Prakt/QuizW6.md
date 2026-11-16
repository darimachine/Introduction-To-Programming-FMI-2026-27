# Quiz
### Седмица 6
<hr>

Въпрос 1
```C++
#include <iostream>
int main() {

    int size = 6;
    int numbers[] = {11, 2, 13, 14, 2, 15};

    int matchIndex = -1;

    for (int i = 0; i < size / 2; i++) {

        if (numbers[i] == numbers[size - 1 - i]) {

            matchIndex = i;
        }
    }

    std::cout << matchIndex;

    return 0;
}
```
<details>
<summary>Отговор</summary>
1
</details>

<hr>

Въпрос 2
```C++
#include <iostream>

void updateValue(const int numbers[], const int size, int targetIndex) {

    numbers[targetIndex] = -1;
}

int main() {

    int size = 5;
    int numbers[] = {1, 2, 3, 4, 5};

    int updateIndex = 2;

    updateValue(numbers, size, updateIndex);

    std::cout << numbers[updateIndex];

    return 0;
}
```
<details>
<summary>Отговор</summary>
Няма да се компилира
</details>

<hr>

Въпрос 3
```C++
#include <iostream>
int main() {

    int size = 11;
    int numbers[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 1; i < size; i *= 2) {

        std::cout << numbers[i] << " ";
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
11 12 14 18
</details>

<hr>

Въпрос 4
```C++
#include <iostream>
int main() {

    int size = 5;
    int numbers[] = {1, 2, 3, 1, 7};

    int i = 0;
    while (i < size) {

        std::cout << numbers[i] << " ";
        i += numbers[i];
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
1 2 1 7
</details>

<hr>

Въпрос 5

Колко проверки трябва да добавим, за да смесигурни, 
че функцията няма да гръмне, при извикване с произволни аргументи?

#Bonus:
* Правилно ли е написана функцията на първо място?
* Какви други неща относно функцията също са нередни?
* Как бихте я пренаписали, за да е напълно коректна?
```C++
void function(int arr[], int size, int i) {

    arr[i] = 10;
}
```
<details>
<summary>Отговор</summary>
3
</details>
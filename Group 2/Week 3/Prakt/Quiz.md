# Quiz
### Седмица 3
<hr>

Въпрос 1
```C++
#include <iostream>

int main() {

    int num1 = 10;
    int& num2 = num1;
    num2 += num1;
    
    std::cout << num1;

    return 0;
}
```
<details>
<summary>Отговор</summary>
20
</details>

<hr>

Въпрос 2
```C++
#include <iostream>

int main() {

    int num1 = 10;
    int num2 = 5;
    
    int& ref = num1;
    std::cout << ref << " ";
    
    ref = num2;
    std::cout << ref << " ";

    std::cout << num1 << " ";
    
    return 0;
}
```
<details>
<summary>Отговор</summary>
10 5 5
</details>

<hr>

Въпрос 3
```C++
#include <iostream>

int decrease(int& num);

int main() {

    int num = decrease(num);
    std::cout << num;

    return 0;
}

int decrease(int& num) {
    return num--;
}
```
<details>
<summary>Отговор</summary>
Undefined behaviour
</details>

<hr>

Въпрос 4
```C++
#include <iostream>

void addUp(const int& num1, const int& num2, const int& sum);

int main() {

    int sum;
    addUp(1, 2, sum);
    std::cout << sum;

    return 0;
}

void addUp(const int& num1, const int& num2, const int& sum) {

    sum = num1 + num2;
}
```
<details>
<summary>Отговор</summary>
Compile error
</details>

<hr>

Въпрос 5
```C++
#include <iostream>

int main() {

    int num = 10;
    const int& ref = num;

    num++;
    
    std::cout << ref;

    return 0;
}
```
<details>
<summary>Отговор</summary>
11
</details>

<hr>

Въпрос 6
```C++
#include <iostream>

int& giveBack(int& variable);

int main() {

    int num = 10;
    giveBack(num) = 15;

    std::cout << num;
    
    return 0;
}

int& giveBack(int& variable) {
    return variable;
}
```
<details>
<summary>Отговор</summary>
15
</details>

<hr>

Въпрос 7
```C++
#include <iostream>

int& giveBackTemp();

int main() {

    int num = 0;
    num = giveBackTemp();

    std::cout << num;

    return 0;
}

int& giveBackTemp() {

    int temp = 10;
    return temp;
}
```
<details>
<summary>Отговор</summary>
Compile error
</details>

<hr>

Въпрос 8
```C++
#include <iostream>

int calculate(int number);
int calculate(int number1, int number2);
double calculate(double number1, double number2);

int main() {

    std::cout << calculate(10) << " ";
    std::cout << calculate(6, 9) << " ";
    std::cout << calculate(3.33, 1.11);

    return 0;
}

int calculate(int number) {
    return number;
}

int calculate(int number1, int number2) {
    return number1 + number2;
}

double calculate(double number1, double number2) {
    return number1 + number2;
}
```
<details>
<summary>Отговор</summary>
10 15 4.44
</details>

<hr>

Въпрос 9
```C++
#include <iostream>

double applyRate(double base, double rate = 0.2);

int main() {

    std::cout << applyRate(10) << " ";
    std::cout << applyRate(10, 0.5);

    return 0;
}

double applyRate(double base, double rate) {

    return base + base * rate;
}
```
<details>
<summary>Отговор</summary>
12 15
</details>

<hr>

Въпрос 10
```C++
#include <iostream>

void f1();
void f2();

int main() {
    f1();
    return 0;
}

void f1() {
    f2();
}

void f2() {
    f1();
}
```
<details>
<summary>Отговор</summary>
Runtime error
</details>

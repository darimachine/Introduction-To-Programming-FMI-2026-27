# Quiz
### Седмица 2
<hr>

Въпрос 1
```C++
#include <iostream>

int main() {

    bool check = 0;
    if(check = 1) std::cout << "True";
    std::cout << "False";

    return 0;
}
```
<details>
<summary>Отговор</summary>
TrueFalse
</details>

<hr>

Въпрос 2
```C++
#include <iostream>

int main() {

    int num = 5;
    std::cout << ++num << " ";
    std::cout << num++ << " ";
    std::cout << num;

    return 0;
}
```
<details>
<summary>Отговор</summary>
6 6 7
</details>

<hr>

Въпрос 3
```C++
#include <iostream>

int main() {

    int num = 5;
    std::cout << ++++num << " ";
    std::cout << ++num++ << " ";
    std::cout << (++num)++;

    return 0;
}
```
<details>
<summary>Отговор</summary>
компилационна грешка
</details>

<hr>

Въпрос 4
```C++
#include <iostream>

int main() {

    for(int i = 0; i != 3; i++)
    {
        i++;
        std::cout << i << " ";
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
безкраен цикъл
</details>

<hr>

Въпрос 5
```C++
#include <iostream>

int main() {

    int num = 0;
    if(num == 0 || ++num) std::cout << num;
    
    return 0;
}
```
<details>
<summary>Отговор</summary>
0
</details>

<hr>

Въпрос 6
```C++
#include <iostream>

int main() {

    int num = 2;
    switch(num)
    {
        case 1: std::cout << "one" << std::endl; break;
        case 2: std::cout << "two" << std::endl;
        case 3: std::cout << "three" << std::endl; 
        default: std::cout << "unknown" << std::endl;
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
two <br>
three <br>
unknown
</details>

<hr>

Въпрос 7
```C++
#include <iostream>

int main() {

    int num = 0;
    while(num <= 5)
    {
        if(num % 2 == 0) continue;
        std::cout << num <<  " ";
        num++;
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
безкраен цикъл
</details>

<hr>

Въпрос 8
```C++
#include <iostream>

int main() {

    int num = 3;
    while(num = 0) {
        std::cout << num << " ";
        num--;
    }
    
    return 0;
}
```
<details>
<summary>Отговор</summary>
нищо
</details>

<hr>

Въпрос 9
```C++
#include <iostream>

int main() {

    for(int i = 0; i++;)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
```
<details>
<summary>Отговор</summary>
нищо
</details>

<hr>

Въпрос 10
```C++
#include <iostream>

int main() {

    int threshold = 'A' - 'a';
    char source = 't';
    char modified = source + threshold;
    std::cout << modified;

    return 0;
}
```
<details>
<summary>Отговор</summary>
B
</details>

<hr>

Въпрос 11
```C++
#include <iostream>

int main() {

    // unsigned short range => [0, 65 535]
    unsigned short source = 66000;
    unsigned short modified = source - 1000;
    std::cout << source << " " << modified;

    return 0;
}
```
<details>
<summary>Отговор</summary>
464 65000
</details>

<hr>

Въпрос 12
```C++
#include <iostream>

int main() {

    do{
        int i = 0;
        std::cout << i << " ";
    } while(i < 3);

    return 0;
}
```
<details>
<summary>Отговор</summary>
компилационна грешка
</details>

<hr>

Въпрос 13
```C++
#include <iostream>

int main() {

    int priority = 2 * 6 / 3 % 3;
    std::cout << priority;

    return 0;
}
```
<details>
<summary>Отговор</summary>
1
</details>

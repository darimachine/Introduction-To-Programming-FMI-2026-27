## Code Snippets

```c++
#include <iostream>
int main()
{
    int a = 2;
    int b = 4;
    int c = a * b;
    std::cout << (++a) * c + (b--) / 3 + c;
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва 33.</b><br><br>
- <code>++a</code> (префиксен) първо увеличава <code>a</code>, после връща самото <code>a</code> (lvalue) с новата му стойност.<br>
- <code>b--</code> (постфиксен) намалява <code>b</code>, но връща копие на старата му стойност (rvalue).<br><br>
Пресмятане: <code>c = 8</code>, <code>++a</code> е 3, <code>b--</code> е 4 (след това <code>b</code> става 3). Значи <code>3 * 8 + 4 / 3 + 8 = 24 + 1 + 8 = 33</code>.
</details>
<br>

```c++
#include<iostream>

int main() {
    int a = 0;

    if (a = 5) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва true.</b><br><br>
Тук е <code>=</code> (присвояване), а не <code>==</code> (сравнение). <code>a = 5</code> записва 5 в <code>a</code> и самият израз има стойност 5. Всяко число различно от 0 се брои за <code>true</code>, затова се влиза в <code>if</code>.
</details>
<br>

```c++
#include<iostream>

int main() {
    int a = 1;

    if (a == 0); {
        std::cout << "true";
    }
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва true.</b><br><br>
Точката и запетая след <code>if (a == 0)</code> е празно тяло на <code>if</code>, т.е. <code>if</code> свършва там. Блокът <code>{ ... }</code> след нея е обикновен блок и се изпълнява винаги, независимо от <code>a</code>.
</details>
<br>

```c++
#include <iostream>
int main()
{
    int a = 2;
    int b = 4;
    if(a, b - 2* a)
        std::cout << a;
    else
        std::cout << 100;
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва 100.</b><br><br>
Операторът запетая <code>,</code> изчислява и двата израза, но връща само последния. Тук това е <code>b - 2 * a = 4 - 4 = 0</code>, т.е. <code>false</code>, и се изпълнява <code>else</code>.
</details>
<br>

```c++
#include<iostream>

int main() {
    switch (x) {
    default:
        std::cout << "no match\n";
        break;
    case 1:
        std::cout << "one\n";
        break;
    case 2:
        std::cout << "two\n";
        break;
    }
}
```
<details>
    <summary>Обяснение</summary>
Всеки случай завършва с <code>break;</code>, затова се изпълнява само един:<br>
- <code>x == 1</code> -> "one"<br>
- <code>x == 2</code> -> "two"<br>
- всяка друга стойност -> "no match" (<code>default</code>)<br><br>
Редът на <code>default</code> няма значение за избора, защото той се взима само ако нищо друго не съвпадне.
</details>
<br>

```c++
#include<iostream>

int main() {
    int x=3;
    switch (x) {
    default:
        std::cout << "no match -> ";
    case 1:
        std::cout << "one-or-after-default\n";
        break;
    case 2:
        std::cout << "two\n";
        break;
    }
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва: no match -> one-or-after-default</b><br><br>
<code>x = 3</code> не съвпада с нито един <code>case</code>, затова се влиза в <code>default</code>. Там няма <code>break;</code>, затова изпълнението "пропада" в следващия по ред случай (<code>case 1</code>) и спира едва на неговия <code>break;</code>. Пропадането следва реда в кода, а не стойностите.
</details>
<br>

```c++
#include <iostream>

int main() {
    int x = 1;
    switch (x) {
        case 1:
            std::cout << "A";
        case 2:
            std::cout << "B";
        default:
            std::cout << "C";
    }
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва ABC.</b><br><br>
Няма нито един <code>break;</code>. Влизаме в <code>case 1</code> и изпълнението продължава надолу през всички следващи случаи до края на <code>switch</code>.
</details>
<br>

```c++
#include <iostream>

int main() {
    for (int i = 0, j = 10; i < j; i++, j--)
        std::cout << i << " " << j << "\n";
}
 
```
<details>
    <summary>Обяснение</summary>
Трите части на <code>for</code>:<br>
- <code>int i = 0, j = 10</code> -> инициализация, изпълнява се веднъж в началото<br>
- <code>i < j</code> -> проверка преди всяка итерация, при <code>false</code> цикълът спира<br>
- <code>i++, j--</code> -> изпълнява се след всяка итерация<br><br>
<b>Отпечатва:</b><br>
0 10<br>
1 9<br>
2 8<br>
3 7<br>
4 6<br><br>
След това <code>i = 5</code> и <code>j = 5</code>, а <code>5 < 5</code> е <code>false</code>, затова цикълът спира.
</details>
<br>

```c++
#include <iostream>
int main()
{
    int a = 10;
    while (a)
    {
        a++;
        std::cout << a--<<std::endl;
        a--;
    }
}
```
<details>
    <summary>Обяснение</summary>
<b>Отпечатва числата от 11 до 2, всяко на нов ред.</b><br><br>
Една итерация, ако в началото <code>a = 10</code>:<br>
- <code>a++</code> -> <code>a</code> става 11<br>
- <code>cout << a--</code> -> печата 11 (старата стойност), после <code>a</code> става 10<br>
- <code>a--</code> -> <code>a</code> става 9<br><br>
Значи на всяка итерация <code>a</code> намалява с 1 и се печата <code>a + 1</code> (от началото на итерацията). Цикълът върви, докато <code>a</code> стане 0. Последната итерация започва с <code>a = 1</code>, печата 2 и оставя <code>a = 0</code>.
</details>
<br>

```c++
#include <iostream>
int main()
{
    int a = 0;
    do
    {
        std::cout << "a";
    } while(a);
}
```

<details>
    <summary>Обяснение</summary>
<b>Отпечатва a (веднъж).</b><br><br>
При <code>do-while</code> тялото се изпълнява първо, а условието се проверява след това. Затова тялото се изпълнява поне веднъж, дори <code>a</code> да е 0. После <code>while(a)</code> е <code>false</code> и цикълът спира.
</details>
<br>

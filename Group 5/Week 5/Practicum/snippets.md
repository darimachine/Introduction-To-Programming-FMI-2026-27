# UP Week 04 — код и обяснения


**1.** Какво ще отпечата следният код?

```cpp
int main() {
    unsigned int first = 10;
    unsigned int second = 10;

    while (cout << first << endl, ----first);
    while (cout << second << endl, second----);
}
```

<details>
<summary>Обяснение</summary>

**Не се компилира.** `----first` е позволено: `--first` връща референция към променливата и можем да я намалим пак. При `second----` първото `--` връща старата стойност, върху която не можем да приложим второ `--`.

</details>

---

**2.** Какво ще отпечата следният код?

```cpp
int main() {
    f();
}

void f() {
    cout << "f()" << endl;
}
```

<details>
<summary>Обяснение</summary>

**Не се компилира.** `f()` трябва да е декларирана преди извикването ѝ в `main()`. Добавяме `void f();` над `main()` или местим цялата функция там.

</details>

---

**3.** Какво ще отпечата следният код?

```cpp
int func(int param = 10) {
    return param;
}

int main() {
    cout << func() << endl;
    cout << func(0) << endl;
}
```

<details>
<summary>Обяснение</summary>

```text
10
0
```

При `func()` не подаваме аргумент и се използва `10` по подразбиране. При `func(0)` сме подали `0`, затова се връща то.

</details>

---

**4.** Какво ще отпечата следният код?

```cpp
void printCharNTimes(char c = '*', int N) {
    for (int i = 0; i < N; i++) {
        cout << c;
    }
}

int main() {
    printCharNTimes('-', 10);
    printCharNTimes(10);
}
```

<details>
<summary>Обяснение</summary>

**Не се компилира.** `c` има стойност по подразбиране, а след него `N` няма. Параметрите със стойности по подразбиране трябва да са в края на списъка.

</details>

---

**5.** Какво ще отпечата следният код?

```cpp
int& foo() {
    int x = 42;
    return x;
}

int main() {
    int& r = foo();
    cout << r << endl;
}
```

<details>
<summary>Обяснение</summary>

**Undefined Behavior.** `x` е локална за `foo()` и се унищожава при излизане от функцията. Върнатата референция е невалидна и не можем да разчитаме какво ще се отпечата.

</details>

---

**6.** Какво ще отпечата следният код?

```cpp
int* foo() {
    int x = 42;
    return &x;
}

int main() {
    int* p = foo();
    cout << *p << endl;
}
```

<details>
<summary>Обяснение</summary>

**Undefined Behavior.** Връщаме адреса на локалната `x`, която се унищожава при излизане от `foo()`. После чрез `*p` се опитваме да прочетем променлива, която вече не съществува.

</details>

---

**7.** Какво ще отпечата следният код?

```cpp
void setToZero(int*& p) {
    *p = 0;
}

int main() {
    int a = 5;
    int* p = &a;
    setToZero(p);
    cout << a << endl;
}
```

<details>
<summary>Обяснение</summary>

```text
0
```

`p` сочи към `a`, така че `*p = 0` е същото като `a = 0`.

</details>

---

**8.** Какво ще отпечата следният код?

```cpp
void setToZero(int*& p, int& b) {
    *p = 0;
    p = &b;
}

int main() {
    int a = 5;
    int b = 8;
    int* p = &a;
    setToZero(p, b);
    cout << a << endl;
    cout << *p << endl;
}
```

<details>
<summary>Обяснение</summary>

```text
0
8
```

С `*p = 0` зануляваме `a`, а с `p = &b` пренасочваме указателя към `b`. Понеже `p` е подаден по референция (`int*&`), промяната на указателя остава и в `main()`.

</details>

---

**9.** Какво ще се случи при компилацията и изпълнението?

```cpp
void f(int p) { cout << p; }
void f(double p) { cout << p; }
int f(int p) { return p; }

int main() {
    f(10);
    f(10.5);
    int a = f(7);
}
```

<details>
<summary>Обяснение</summary>

**Не се компилира.** `void f(int)` и `int f(int)` имат еднакви параметри и се различават само по връщания тип. Само това не е достатъчно за претоварване на функция.

</details>

---

**10.** Какво ще се случи със следния код?

```cpp
void h() { f(); }
void g() { h(); }
void f() { g(); }

int main() {
    f();
}
```

<details>
<summary>Обяснение</summary>

**Не се компилира.** `h()` извиква `f()`, преди тя да е декларирана. Ако добавим декларацията, ще получим рекурсия без край: `f()` → `g()` → `h()` → `f()` → …

</details>

---

**11.** Какво ще отпечата следният код?

```cpp
int& getValue(int& num) {
    return num;
}

int main() {
    int x = 5;
    getValue(x) = 10;
    cout << "x: " << x << endl;
}
```

<details>
<summary>Обяснение</summary>

```text
x: 10
```

`getValue(x)` връща референция към самата `x`. Затова `getValue(x) = 10` е същото като `x = 10`.

</details>

---

**12.** Какво ще отпечата следният код?

```cpp
int& getValue(int& num) {
    return ++num;
}

int main() {
    int x = 5;
    int b = 1;
    getValue(x) = getValue(b);
    cout << "x: " << x << endl;
}
```

<details>
<summary>Обяснение</summary>

```text
x: 2
```

`getValue(b)` увеличава `b` на `2`, а `getValue(x)` увеличава `x` на `6`; и двете връщат референции. След това присвояването записва стойността на `b` в `x`, така че `x` става `2`.

</details>

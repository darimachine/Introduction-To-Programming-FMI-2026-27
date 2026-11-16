# Quiz
### Седмица 4
<hr>

Въпрос 1
```C++
#include <iostream>
int main() {

    int size = 5;
    int arr[] = {12, 8, -1, 3, 0, -1};
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
    }
    std::cout << minIndex;

    return 0;
}
```
<details>
<summary>Отговор</summary>
2
</details>

<hr>

Въпрос 2
```C++
#include <iostream>
int main() {

    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int target = 4;
    int foundIndex = -1;

    for (int i = 0; i < size && arr[i] != target; i++) {
        if (arr[i] == target) foundIndex = i;
    }
    std::cout << foundIndex;

    return 0;
}
```
<details>
<summary>Отговор</summary>
-1
</details>

<hr>

Въпрос 3
```C++
#include <iostream>
int main() {

    int size = 5;
    int arr[] = {12, 8, 2, 3, 4};
    
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1];
    }
    std::cout << arr[size - 1];
    
    return 0;
}
```
<details>
<summary>Отговор</summary>
29
</details>

<hr>

Въпрос 4
```C++
#include <iostream>
int main() {

    int size = 5;
    int arr1[] = {1, 2, 3, 14, 5, 6};
    int arr2[] = {1, 2, 13, 4, 15};
    int check = 0;

    for (int i = 0; i < size; i++) {
        check = arr1[i] - arr2[i];
        if (check) break;
    }
    if (check == 0) std::cout << "equal";
    if (check < 0) std::cout << "less";
    if (check > 0) std::cout << "greater";

    return 0;
}
```
<details>
<summary>Отговор</summary>
less
</details>

<hr>

Въпрос 5
```C++
#include <iostream>
int main() {
    int size = 6;
    int arr[] = {1, 2, 3, 4, 5, 1};
    int index = -1;

    for (int i = 1; i < size - 1; i++) {
        int sum = 0;
        for (int j = i + 1; j < size; j++) {
            sum += arr[j];
        }
        if (sum == arr[i - 1]) { index = i; break; }
        arr[i] += arr[i - 1];
    }
    std::cout << index;
    return 0;
}
```
<details>
<summary>Отговор</summary>
3
</details>
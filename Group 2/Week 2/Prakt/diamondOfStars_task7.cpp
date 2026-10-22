
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 39 || n % 2 == 0) {
        cout << "Nevaliden vhod";
        return 0;
    }
    int spaces = n / 2;
    int stars = 1;

    // gorna
    while (stars <= n) {
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        for (int i = 0; i < stars; i++) {
            cout << "*";
        }

        cout << endl;

        spaces--;
        stars += 2;
    }

    // dolna
    spaces = 1;
    stars = n - 2;

    while (stars >= 1) {
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }

        for (int i = 0; i < stars; i++) {
            cout << "*";
        }

        cout << endl;

        spaces++;
        stars -= 2;
    }

    return 0;
}

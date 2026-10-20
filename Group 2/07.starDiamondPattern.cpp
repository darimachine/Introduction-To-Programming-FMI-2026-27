#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Невалиден вход" << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            int spaces;
            int stars;

            if (i <= n / 2 + 1) {
                spaces = n / 2 - i + 1;
                stars = 2 * i - 1;
            }
            else {
                spaces = i - n / 2 - 1;
                stars = 2 * (n - i) + 1;
            }

            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}



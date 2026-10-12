#include <iostream>
using namespace std;

int main() {

    int animalsCount = 0;
    int legsCount = 0;

    cin >> animalsCount >> legsCount;
    if (animalsCount>0 && legsCount >= 2 * animalsCount && legsCount <= 4 * animalsCount && legsCount % 2 == 0) {
        int cows = (legsCount - 2 * animalsCount) / 2;
        int chickens = animalsCount - cows;

        cout << "Cows: " << cows << endl;
        cout << "Chickens: " << chickens << endl;
    }
    else cout << "Input parameters are invalid";

    return 0;

}
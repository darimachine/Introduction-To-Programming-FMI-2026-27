
#include <iostream>
using namespace std;

bool isLeap(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int daysInMonth(int m, int y) {
    if (m == 2) return isLeap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

int daysBetween(int d1, int m1, int y1, int d2, int m2, int y2) {
    int totalDays = 0;
    for (; d1 != d2 || m1 != m2 || y1 != y2; totalDays++) {
        if (++d1 > daysInMonth(m1, y1)) {
            d1 = 1;
            if (++m1 > 12) {
                m1 = 1;
                y1++;
            }
        }
    }

    return totalDays;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    cout << daysBetween(d1, m1, y1, d2, m2, y2);
}

//1 1 2025
//1 3 2025 =-----------59
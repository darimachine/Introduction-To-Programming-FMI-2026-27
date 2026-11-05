#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int factorielN = 1;

    for (int i = 1; i <= num; i++) {
        factorielN = factorielN * i;
    }

    cout << factorielN << endl;
}
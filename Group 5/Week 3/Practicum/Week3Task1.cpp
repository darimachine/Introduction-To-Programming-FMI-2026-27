#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cin >> num1 >> num2;

  int output = (num1 > num2) ? num1 : num2;
  cout << output << endl;
}

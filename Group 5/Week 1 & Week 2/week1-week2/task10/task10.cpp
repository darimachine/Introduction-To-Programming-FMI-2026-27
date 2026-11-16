#include <iostream>
using namespace std; 

int main()
{
    int fourDigitNum; 
    cin >> fourDigitNum; 

    int a = fourDigitNum % 10; 
    fourDigitNum /= 10; 
    int b = fourDigitNum % 10; 
    fourDigitNum /= 10; 
    int c = fourDigitNum % 10; 
    fourDigitNum /= 10; 
    int d = fourDigitNum; 

    int sum = a + b + c + d; 

    cout << "Sum: " << sum << endl; 
    cout << "Multiplication: " << a * b * c * d << endl; 
    cout << "Average: " << double(sum) / 4 << endl; 
}
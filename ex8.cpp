#include <iostream>
using namespace std;

long long decimalToBinary(int decimalNum)
{
    int quotient = decimalNum / 2;
    int remainder = decimalNum % 2;
    if (quotient == 0) 
    {
        return remainder;
    }
    
    return decimalToBinary(quotient) * 10LL + remainder;
}
long long pow(int num, int power)
{
    long long result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= num;
    }
    return result;
}

long long binaryToDecimal(long long binaryNum, int powerOfTwo = 0)
{
    long long remainder = binaryNum % 10;
    long long quotient = binaryNum / 10;
    long long powResult = pow(2, powerOfTwo);
    long long result = remainder * powResult;
    if (quotient == 0)
    {
        return result;
    }
    return result + binaryToDecimal(quotient, powerOfTwo + 1);
}

bool isBinary(long long num) 
{
    while (num > 0)
    {
        if (num % 10 != 1 && num % 10 != 0)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    char systemChoice;
    long long number;
    cin >> systemChoice >> number;

    if (number < 0 || (systemChoice == 'b' && number > 500000) || (systemChoice == 'd' && !isBinary(number)))
    {
        cout << "invalid input";
        return 1;
    }

    switch (systemChoice) 
    {
        case 'b': cout << decimalToBinary(number); break;
        case 'd': cout << binaryToDecimal(number); break;
        default:
        {
            cout << "invalid input";
            return 1;
        };
    }
    
    return 0;
}

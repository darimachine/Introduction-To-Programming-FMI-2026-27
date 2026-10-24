#include <iostream>

using namespace std;

long long binaryToDecimal(long long number);
long long decimalToBinary(long long number);
long long raiseToNPower(int steps, int power);

int main()
{
    char numericSystem = ' ';
    long long number = 0;

    cin >> numericSystem >> number;

    switch (numericSystem)
    {
        case 'b':
            cout << decimalToBinary(number) << endl;
            break;
        case 'd':
            cout << binaryToDecimal(number) << endl;
            break;
        default:
            cout << "Invalid numeric system specifier.\n";
            break;
    }

    return 0;
}

long long binaryToDecimal(long long number)
{
    long long numberConverted = 0;
    int power = 0;
    int count = 0;

    while (number > 0)
    {
        numberConverted += (long long)(number % 10) * raiseToNPower(count, 2);
        number /= 10;
        count++;
    }
    
    return numberConverted;
}

long long decimalToBinary(long long number)
{
    long long result = 0;
    long long place = 1;

    while (number > 0)
    {
        result += (number % 2) * place;
        number /= 2;
        place *= 10;
    }
    
    return result;
}

long long raiseToNPower(int steps, int power)
{
    long long num = 1;

    for (int i = 0; i < steps; i++)
    {
        num *= power;
    }
    
    return num;
}
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

void printLine() {
    cout << "---------- This line is printed" << endl;

}

//int maxOfTwo(int a, int b);

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;


}

double rectangleArea(double a, double b);

void changes(int& N)
{
    N++;
    return;
}

void doubleValue(int& n)
{
    n *= 2;
    return;
}

void sortTwo(int& a, int& b)
{
    if (a > b)
    {
        int temporary = a;
        int a = b;
        int b = temporary;
    }
}

//bool isPrime(int N)
//{
//    if (N < 2)
//    {
//        return true;
//    }
//
//    for (int i = 2; i * i <= N; i++)
//    {
//        if (N % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}

void quotientAndRemainder(int a, int b, int& q, int& r) {
    q = a / b;
    r = a % b;
}

void minMax(int a, int b, int c, int& mn, int& mx)
{
    if (b > a)
    {
        mn = a;
        mx = b;
    }
    else
    {
        mn = b;
        mx = a;
    }
    if (c > b && c > a)
    {
        mx = c;
    }
    else
    {
        if ((c > b && c < a) || (c > a && c < b))
        {
            //We do nothing
        }
        else //(c<b && c<a)
        {
            mn = c;
            
        }
    }
}

void analyzeNumber(int n, int& digitCount, int& digitSum)
{
    digitCount = 0;
    digitSum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        digitCount++;
        digitSum += digit;

        n = n / 10;
    }
}

int gcd(int a, int b)
{
    if (b > a)
    {
        int temporary = a;
        a = b;
        b = temporary;
    }

    while(a % b != 0)
    {
        int temporary = b;
        b = a % b;
        a = temporary;
    }
    return b;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return true;
    }
    for (int i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimeFactors(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
                cout << i <<"  ";
        }
    }
}

int main() {
   
    int N;
    cin >> N;

    printPrimeFactors(N);
    
}




double rectangleArea(double a, double b)
{
    int result = a * b;
    return result;
}

int maxOfTwo(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
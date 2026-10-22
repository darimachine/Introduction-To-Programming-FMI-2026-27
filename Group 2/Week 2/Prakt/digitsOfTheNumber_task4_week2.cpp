using namespace std;
#include <iostream>

int main()
{
    long long n;
    cin >> n;
    int sumOfDigits = 0;
    long long anotherN = n;
    int nOfDigits = 0;
    long long reversedN = 0;
    int maxDigit = 0;

     
   while (n !=0)
    {

       int digit = n % 10;
       nOfDigits++;
       sumOfDigits += digit;
       reversedN = reversedN * 10+ digit;
       if (digit>maxDigit)
       {
           maxDigit = digit;
       }
           n = n / 10;
    }

   cout << "Broi cifri: " << nOfDigits << endl;
   cout << "Sbor: " << sumOfDigits << endl;
   cout << "Oburnato: " << reversedN << endl;
   cout << "Nai-golqma cifra: " << maxDigit << endl;
   return 0;
}


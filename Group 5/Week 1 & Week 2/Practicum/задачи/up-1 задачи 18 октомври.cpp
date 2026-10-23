#include <iostream>

int main()
{
    /*/ ex1

    std::cout << "UP kursyt e \n";
    std::cout << "mnogo gotin! \n";
    std::cout << "Da, vsichki nie \n";
    std::cout << "obichame UP kursa! \n";
    */

    /*/ ex2

    std::cout << "  *  \n";
    std::cout << " *** \n";
    std::cout << "***** \n";
    */

    /*/ ex3

    int number1;
    int number2;

    std::cin >> number1 >> number2;

    if ((number1 >= 10) && (number2 >= 10))
    {
        std::cout << (number1 % 100) << (number2 % 100);
    }
    */

    /*/ ex4

    int number1;
    int number2;

    std::cin >> number1 >> number2;

    std::cout << "Sum: "<< number1 + number2 << "\n";
    std::cout << "Diff: " << number1 - number2 << "\n";
    std::cout << "Multiplication: " << number1 * number2 << "\n";
    std::cout << "Division: " << number1 / number2 << "\n";
    */

    /*/ ex5

    double diameter;
    std::cin >> diameter;

    double radius = diameter / 2;
    double const Pi = 3.14;
    double area = radius * radius * Pi;
    double perimeter = 2 * Pi * radius;

    std::cout << "Area: " << area << "\n";
    std::cout << "Perimeter: " << perimeter;
    */

    /*/ ex6

    int totalSeconds;
    std::cin >> totalSeconds;

    int days = totalSeconds / 86400;
    int hours = (totalSeconds % 86400) / 3600;
    int minutes = ((totalSeconds % 3600) / 60);
    int remainingSeconds = totalSeconds % 60;

    std::cout << days << " days " << hours << " hours " << minutes << " minutes and " << remainingSeconds << " seconds ";
    */

    /*/ ex7

    double number1;
    double number2;

    std::cin >> number1 >> number2;

    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    std::cout << "A: " << number1 << "\n";
    std::cout << "B: " << number2;
    */

    /*/ ex8

    char symbol1, symbol2, symbol3;
     std::cin >> symbol1 >> symbol2 >> symbol3;

     int symbol1ASCII = symbol1;
     int symbol2ASCII = symbol2;
     int symbol3ASCII = symbol3;

     int sum = symbol1ASCII + symbol2ASCII + symbol3ASCII;
     if (sum % 2 == 0)
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ ex9

     int year;
     std::cin >> year;

     if ((year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ))
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ex10

     int number;
     std::cin >> number;

     if (1000 <= number  && number <= 9999)
     {
         int firstDigit = number / 1000;
         int secondDigit = ((number % 1000) / 100);
         int thirdDigit = ((number % 100) / 10);
         int lastDigit = number % 10;

         int sum = firstDigit + secondDigit + thirdDigit + lastDigit;
         int multiplication = firstDigit * secondDigit * thirdDigit * lastDigit;
         double average = (sum / 4.0);

         std::cout << "Sum = " << sum << "\n";
         std::cout << "Multiplication = " << multiplication << "\n";
         std::cout << "Average = " << average << "\n";

     }

     else
     {
         std::cout << "The number is not between 1000 and 9999.";
     }
     */

     /*/ ex11

     int a, b, c, d;
     std::cin >> a >> b >> c >> d;

     if ((c >= a && c <= b) && ( d >= a && d <= b))
     {
         std::cout << "2";
     }
     else if ((c >= a && c <= b) || (d >= a && d <= b))
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ ex12

     int number1, number2, number3;
     std::cin >> number1 >> number2 >> number3;

     if ((number1 > 0 && number2 > 0 && number3 > 0) &&
         (((number1 + number2) > number3) &&
             ((number1 + number3) > number2) &&
             (number2 + number3) > number1))
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ ex13

     int number1, number2, number3, number4;
     std::cin >> number1 >> number2 >> number3 >> number4;

     int diff = number2 - number1;

     if ((number1 + diff == number2) && (number2 + diff == number3) && (number3 + diff == number4))
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ ex14

     int number1, number2, number3, number4;
     std::cin >> number1 >> number2 >> number3 >> number4;

     if ((number2 * number2 == number1 * number3) &&
         (number3 * number3  == number2 * number4) &&
         (number1 != 0 && number2 != 0 && number3 != 0 && number4 != 0))
     {
         std::cout << "1";
     }
     else
     {
         std::cout << "0";
     }
     */

     /*/ ex15

     long long cardNumber;
     std::cin >> cardNumber;
     int lastFourDigits = cardNumber % 10000;

     std::cout << "XXXXXXXXXXXX" << lastFourDigits;
     */

     /*/ ex16

     int number;
     std::cin >> number;

     int dayIndex;

     if (0 < number && number < 8)
     {
         dayIndex = number;
     }
     else
     {
         dayIndex = (number + 1) % 7;

     }

     if (dayIndex == 0 || dayIndex == 7)
     {
         std::cout << "Sunday";
     }
     else if (dayIndex == 1)
     {
         std::cout << "Monday";
     }
     else if (dayIndex == 2)
     {
         std::cout << "Tuesday";
     }
     else if (dayIndex == 3)
     {
         std::cout << "Wednesday";
     }
     else if (dayIndex == 4)
     {
         std::cout << "Thursday";
     }
     else if (dayIndex == 5)
     {
         std::cout << "Friday";
     }
     else if (dayIndex == 6)
     {
         std::cout << "Saturday";
     }
     */

     /*/ ex17

     double number1, number2;
     char operation;
     std::cin >> number1 >> operation>> number2;

     if (operation == '+')
     {
         std::cout << (number1 + number2);
     }
     else if (operation == '-')
     {
         std::cout << (number1 - number2);
     }
     else if (operation == '*')
     {
         std::cout << (number1 * number2);
     }
     else if (operation == '/')
     {
         if (number2 == 0)
         {
             std::cout << "Error! You can't divide by 0!";
         }
         else
         {
             std::cout << (number1 / number2);
         }
     }
     */

     /*/ ex18

     int numberOfAnimals, numberOfLegs;
     std::cin >> numberOfAnimals >> numberOfLegs;

     if (numberOfAnimals < 0 || numberOfLegs < 0 || numberOfLegs % 2 != 0)
     {
         std::cout << "Make sure to check if the input data is valid!";
     }

     int cows = ((numberOfLegs - numberOfAnimals * 2) / 2);
     int hens = numberOfAnimals - cows;

     if (cows >= 0 && hens >= 0)
     {
         std::cout << "Cows: " << cows << "\n";
         std::cout << "Hens: " << hens;
     }
     else
     {
         std::cout << "Make sure to check if the input data is valid!";
     }
     */

    /*/ ex19
    
    char a, b, x;
    long long k;

    std::cin >> a >> b >> x >> k;

    long long startIndex = x - a;
    long long rangeOfTheInterval = b - a + 1;
    long long newIndex = ((startIndex + (k % rangeOfTheInterval) + rangeOfTheInterval) % rangeOfTheInterval);
    char resulutInASCII = a + (char)newIndex;

    std::cout << resulutInASCII;
    */
}




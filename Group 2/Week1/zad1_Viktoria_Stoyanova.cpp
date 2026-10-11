

#include <iostream>

int main()
{
  
    std::cout << "Enter first number: ";
    double a;
    std::cin >> a;
    std::cout << "Enter second number: ";
    double b;
    std::cin >> b;
    std::cout << a << "+" << b <<"="<< a + b << std::endl;
    std::cout << a << "-" << b << "=" << a - b << std::endl;
    std::cout << a << "*" << b << "=" << a * b << std::endl;
    if (b == 0)
    {
        std::cout << "Error: Cannot divide by 0";

    }
    else
    {
        std::cout << a << "/" << b << "=" << a / b << std::endl;
        std::cout << a << "%" << b << "=" << std::fmod(a, b);
    }
  
    
       
    
   


}


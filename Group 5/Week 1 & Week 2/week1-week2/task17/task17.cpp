#include <iostream>
using namespace std; 

int main() 
{
	double num1, num2 = 0.0; 
	char operation = ' '; 
	cin >> num1 >> operation >> num2; 

	switch (operation){
	    case '+':
			cout << num1 + num2 << endl; 
			break; 
		case '-': 
			cout << num1 - num2 << endl; 
			break; 
		case '*':
			cout << num1 * num2 << endl;  
			break; 
		case '/':
            if (num2 == 0) {
                cout << "Error! You can't divide by 0!\n";
                break;
            } else {
                cout << num1 / num2 << endl;
            }
			break; 
	}
}
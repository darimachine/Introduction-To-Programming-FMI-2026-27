
#include <iostream>
    using namespace std;

    int main() {
        int days, month, year, num;
        cin >> days >> month >> year >> num;

   
        for (int i = 0; i < num; i++) {
            days++; 

            int maxDays = 30; 

            
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                maxDays = 31;
            }
            
            else if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    maxDays = 29; 
                }
                else {
                    maxDays = 28;
                }
            }

            
            if (days > maxDays) {
                days = 1; 
                month++;  
            }

            
            if (month > 12) {
                month = 1; 
                year++;   
            }
        }

        if (days < 10) {
            cout << "0";
        }
        cout << days << ".";

        if (month < 10) {
            cout << "0";
        }
        cout << month << "." << year << endl;

        return 0;
    }

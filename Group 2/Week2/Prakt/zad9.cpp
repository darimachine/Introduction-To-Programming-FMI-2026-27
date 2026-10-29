#include <iostream>

int main() {
    int dd, mm, yy, forward_days;

    bool validInput = 0;
    while(!validInput) {
        std::cin >> dd >> mm >> yy >> forward_days;

        if(forward_days>100000||forward_days<0) { std::cout << "The date can only be advanced and only up to 100000 days at a time. " << std::endl; continue; }

        if(dd < 1 || dd > 31) { std::cout << "A month must have no less than 1 and no more than 31* days. " << std::endl; continue; }
        else if(mm < 1 || mm > 12) { std::cout << "A year has only 12 months. " << std::endl; continue; }

        if(mm==2) {
            if(yy%4==0 && dd > 29) { std::cout << yy << " is a leap year. The month of february has only 29 days. " << std::endl; continue; }
            else if(yy%4!=0 && dd > 28) { std::cout << yy << " is a leap year. The month of february has only 29 days. " << std::endl; continue; }
        }

        if(mm<=7 && mm%2==0 && dd > 30) { std::cout << "Month " << mm << " must not have more than 30 days. " << std::endl; continue; } 
        else if(mm>=2 && mm%2!=0 && dd > 30) { std::cout << "Month " << mm << " must not have more than 30 days. " << std::endl; continue; } 

        validInput = 1;
    }

    int fwd_dd, fwd_mm, fwd_yy;
    fwd_dd = dd; fwd_mm = mm; fwd_yy = yy;

    while(forward_days) {
        if (fwd_mm == 2) { // The dreadful february...
            if(fwd_yy%4==0) { // Leap year
                if(forward_days>=29) { fwd_mm++; forward_days -= 29;}
                else if(fwd_dd+forward_days>29) { fwd_mm++; fwd_dd = fwd_dd+forward_days-29; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;}
            }
            else { // Non-leap year
                if(forward_days>=28) { fwd_mm++; forward_days -= 28;}
                else if(fwd_dd+forward_days>28) { fwd_mm++; fwd_dd = fwd_dd+forward_days-28; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;}

            }
        }
        // Proof that humanity has no sense.
        if(fwd_mm<=7) { // Odd months have 31 days
            if(fwd_mm%2==0) { 
                if(forward_days>=30) { fwd_mm++; forward_days -= 30;}
                else if(fwd_dd+forward_days>30) { fwd_mm++; fwd_dd = fwd_dd+forward_days-30; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;}
            }
            else { 
                if(forward_days>=31) { fwd_mm++; forward_days -= 31;}
                else if(fwd_dd+forward_days>31) { fwd_mm++; fwd_dd = fwd_dd+forward_days-31; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;} 
            }
        } else { // Even months have 31 days
           if(fwd_mm%2!=0) { 
                if(forward_days>=30) { fwd_mm++; forward_days -= 30;}
                else if(fwd_dd+forward_days>30) { fwd_mm++; fwd_dd = fwd_dd+forward_days-30; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;}
            }
            else { 
                if(forward_days>=31) { fwd_mm++; forward_days -= 31;}
                else if(fwd_dd+forward_days>31) { fwd_mm++; fwd_dd = fwd_dd+forward_days-31; forward_days -= forward_days;}
                else {fwd_dd += forward_days; forward_days -= forward_days;} 
            } 
        }
        if(fwd_mm>12) { fwd_yy++; fwd_mm = 1;}
    }
    std::cout << fwd_dd << "." << fwd_mm << "." << fwd_yy << std::endl;
}
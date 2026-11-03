#include <iostream>

// -------------------------- Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
const int days_per_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void read_date(int (&date)[3]);
void print_interval(int date_a[], int date_b[]);
bool validate_date(int day, int month, int year);
int calculate_days_in_interval(int date_a[], int date_b[]);

int main() {

    int date_a[3];
    int date_b[3];

    read_date(date_a);
    read_date(date_b);

    print_interval(date_a, date_b);

    return 0;
}

// --------------------------------- Implementation ---------------------------------

bool validate_date(int day, int month, int year) {

    // If the second row evaluates to a non-zero integer (such as 2 for 2026 % 4),
    // 0 days are added to the variable, otherwise if it evaluates to 0, 1 day is added

    int days_this_month = days_per_month[month-1];
    days_this_month += !(year%4);

    if (day < 1 || day > days_this_month) {
        std::cout << std::endl;
        std::cout << "! Invalid date. The value for DD (day) must be between 1 and " << days_this_month << ". ";
        return false;
    }
    else if (month < 1 || month > 12) {
        std::cout << std::endl;
        std::cout << "! Invalid date. The value for MM (month) must be between 1 and 12. ";
        return false;
    }

    // The program will work for any interval tbh
    else if (year <1900 || year > 2100) {
        std::cout << std::endl;
        std::cout << "! Invalid date. The value for YYYY (year) must be between 1900 and 2100. ";
        return false;
    }

    return true;
}

void read_date(int (&date)[3]) {
    char separator;

    bool valid_input = 0;
    while(!valid_input) {
        std::cout << "Enter a date (format: dd.mm.yy | dd/mm/yy): ";

        //  ---------- Day ---------- / --------- Month --------- / --------- Year ---------
        std::cin >> date[0] >> separator >> date[1] >> separator >> date[2];

        // -------------------------------------- Checks --------------------------------------
            
        if(separator!='.' && separator!='/') {
            std::cout << "! Invalid date format. ";
            continue; // Reset
        }

        valid_input = validate_date(date[0], date[1], date[2]);
    }
}

void print_interval(int date_a[], int date_b[]) {
    if(date_a == date_b) {
        std::cout << "No interval between dates." << std::endl;

        return;
    }
    int days_in_interval = calculate_days_in_interval(date_a, date_b);

    if(days_in_interval == -1) {
        return;
    } 

    std::cout << days_in_interval << " days between " << date_a[0] << "/"
                                                      << date_a[1] << "/"
                                                      << date_a[2] << " and "
                                                      << date_b[0] << "/"
                                                      << date_b[1] << "/"
                                                      << date_b[2] << ".";
    std::cout << std::endl;             
}

int calculate_days_in_interval(int date_a[], int date_b[]) {

    // ---------------------- CHECKS ------------------------
        if(!date_a || !date_b) return -1;

        // // Interval is backwards in time
        // if(date_a[2] > date_b[2]) {
        //     // Swap elements
        //     for(int i = 0; i < 3; ++i) {
        //         int temp = date_a[i];
        //         date_a[i] = date_b[i];
        //         date_b[i] = temp;
        //     }
        // }

        else if (date_a[2] > date_b[2]) {
            // I actually can but no fun is allowed.
            std::cout << std::endl;
            std::cout << "! Cannot calculate days in interval backwards in time." << std::endl;
            
            return -1;
        }
    // ------------------------------------------------------

    int days_in_interval = 0;
    
    // ------------------------ NOTE -------------------------
    // A few things could happen here, in the best case
    // the interval is an exact difference of years,
    // like 08/12/2017 to 08/12/2023, which is only 2
    // arithmetic operations to calculate the days between  
    // the two dates. Otherwise additional calculation is
    // performed.

    // Additionally leap years need to be accounted for, if
    // the latter date is a leap year but the date itself is
    // before 29/02, an additional day should not be counted,
    // for that year; ex: 14/07/1998 - 20/02/2024.
    // When this happens the leap day for the last year is
    // ignored and left for calculation at the months' or
    // days' level.
    // ------------------------------------------------------

    // ----------------------- YEARS ------------------------
        int year_diff = date_b[2] - date_a[2];
        int leap_years = 0;

        leap_years += (date_a[2] % 4 + year_diff) / 4;
        leap_years -= (date_a[2] % 4 + year_diff) / 100;
        leap_years += (date_a[2] % 4 + year_diff) / 400;

        if(!(date_a[2] % 4) && date_a[1] < 3) leap_years++;

        if(date_b[1] < 3 && leap_years) leap_years--;
    
        days_in_interval += year_diff*365 + leap_years;

        if(date_a[0] == date_b[0] && date_a[1] == date_b[1]) {
            return days_in_interval;
        }

    // ----------------------- MONTHS ----------------------- 
        int month_diff = date_b[1] - date_a[1];

        if(month_diff) {
            for(int i = date_a[1]; i < date_b[1]; ++i) {
                
                // Handle 29/02
                if(i == 2 && !(date_b[2]%4)) days_in_interval++;

                days_in_interval += days_per_month[i-1];
            }
            
        }
        days_in_interval += date_b[0] - date_a[0];

    return days_in_interval;
}
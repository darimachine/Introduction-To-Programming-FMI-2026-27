#include <iostream>
using namespace std; 

int main()
{
    int sec; 
    cin >> sec; 

    int days = 0; 
    int hours = 0; 
    int mins = 0; 
    int seconds = 0;   

    if (sec >= 60) {
        mins = sec / 60;
        seconds = sec - (60 * mins);
        //seconds = sec % 60; 
    } else
        seconds = sec;
    if (mins >= 60)
    {
        hours = mins / 60; 
        mins -= (60 * hours); 
    } 
    if (hours >= 24)
    {
        days = hours / 24; 
        hours -= (24 * days);
    }

    cout << days << " days, " << hours << " hours, " << mins << " minutes and "
         << seconds << " seconds" << endl; 
}
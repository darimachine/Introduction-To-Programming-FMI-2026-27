#include <iostream>

using namespace std;

int main()
{
    char letterAMin, letterAMax, letterBMin, letterBMax, letterC;
    cin >> letterAMin >> letterAMax >> letterBMin >> letterBMax >> letterC;
    int aMin = tolower(letterAMin);
    int aMax = tolower(letterAMax);
    int bMin = letterBMin;
    int bMax = letterBMax;
    int c = letterC;

    //cout << aMin << " " << aMax << " " << bMin << " " << bMax << " " << c << endl;

    bool union_ = false;
    bool intersection = false;

    if(((c >= aMin) && (c <= aMax)) || ((c >= bMin) && (c <= bMax)))
    {
        cout << "true," << " ";
        union_ = true;
    } else 
    {
        cout << "false," << " ";
    }

    if (((c >= aMin) && (c <= aMax)) && ((c >= bMin) && (c <= bMax)))
    {
        intersection = true;
        cout << "true," << " ";
    } else
    {
        cout << "false," << " ";
    }

    if (((c >= aMin) && (c <= aMax)) && ((c < bMin) || (c > bMax))) 
    {
        cout << "true," << " ";
    } else
    {
        cout << "false," << " ";
    }

    if ((intersection == false) && (union_ == true)) 
    {
        cout << "true" << " ";
    } else
    {
        cout << "false" << " ";
    }


    
}



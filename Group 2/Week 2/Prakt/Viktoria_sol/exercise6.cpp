#include <iostream>
#include <string>
using namespace std;

void generatePyramid(int n, string side);
int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "enter an odd number" << endl;
        return 1;
    }

    generatePyramid(n, "Up");
    cout << string(n, '*') << endl;
    generatePyramid(n, "Down");

    return 0;
}

void generatePyramid(int n, string side)
{
    int prev_star_count;
    int start_space;

    if (side == "Down")
    {
        prev_star_count = n - 2;
        start_space = 1;
    }
    else if (side == "Up")
    {
        prev_star_count = 1;
        start_space = n / 2;
    }
    else
    {
        cout << "Invalid side. Use 'Up' or 'Down'." << endl;
        return;
    }

    for (int i = 0; i < n / 2; i++)
    {
        string row = "";
        for (int j = 0; j < start_space; j++)
        {
            row += " ";
        }

        for (int j = 0; j < prev_star_count; j++)
        {
            row += "*";
        }

        cout << row << endl;

        if (side == "Down")
        {
            prev_star_count -= 2;
            start_space++;
        }
        else if (side == "Up")
        {
            prev_star_count += 2;
            start_space--;
        }
    }
}

{

    for (int i = 0; i < n; i++)
    {
        string row = "";
        for (int j = 0; j <= i; j++)
        {
            row += "*";
        }
        cout << row << endl;
    }
}
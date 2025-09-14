#include <iostream>
using namespace std;
int main()
{
    float num;
    cin >> num;

    if (num >= 0 && num <= 25)
    {
        cout << "Interval [0,25]";
    }
    else if (num > 25 && num <= 50)
    {
        cout << "Interval (25,50]";
    }
    else if (num > 50 && num <= 75)
    {
        cout << "Interval (50,75]";
    }
    else if (num > 75 && num <= 100)
    {
        cout << "Interval (75,100]";
    }
    else
    {
        cout << "Out of Intervals";
    }

    return 0;
}

/*Given a number X. Determine in which of the following intervals the number X belongs to:
[0,25], (25,50], (50,75], (75,100]*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
#include <iostream>
using namespace std;

int main()
{
    double N;
    cin >> N;

    int int_part = (int)N;

    double dec_part = N - int_part;

    if (dec_part == 0.0)
    {
        cout << "int " << int_part << endl;
    }
    else
    {
        cout << "float " << int_part << " " << dec_part << endl;
    }

    return 0;
}

/*Given a number N. Determine whether N is float number or integer number.

Note:

If N is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N is integer number then print "int" followed by the integer part separated by space.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
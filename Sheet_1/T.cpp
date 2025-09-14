#include <iostream>
using namespace std;
int main()
{
    long int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
    {
        cout << a << endl;
        ;
        if (b <= c)
        {
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
            cout << b << endl;
        }
    }
    else if (b <= a && b <= c)
    {
        cout << b << endl;
        if (a <= c)
        {
            cout << a << endl;
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
            cout << a << endl;
        }
    }
    else
    {
        cout << c << endl;
        if (a <= b)
        {
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
        }
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}

// Given three numbers A, B, C.
//  Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
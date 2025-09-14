#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char op1, op2;

    cin >> a >> op1 >> b >> op2 >> c;

    if (op1 == '+')
    {
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (op1 == '-')
    {
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    else if (op1 == '*')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }

    return 0;
}

/*Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expressio*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
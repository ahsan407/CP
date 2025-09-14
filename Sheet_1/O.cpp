#include <iostream>
using namespace std;
int main()
{
    char op;
    int a, b;

    cin >> a >> op >> b;

    if (op == '+')
        cout << a + b << endl;
    else if (op == '-')
        cout << a - b << endl;
    else if (op == '*')
        cout << a * b << endl;
    else if (op == '/')
        cout << a / b << endl;

    return 0;
}

// Given a mathematical expression. The expression will be one of the following expressions: A+B, A-B, A*B and A/B.

// Print the result of the mathematical expression.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
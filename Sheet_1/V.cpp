#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cin >> num1 >> op >> num2;

    if (op == '<')
    {
        if (num1 < num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (op == '>')
    {
        if (num1 > num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (op == '=')
    {
        if (num1 == num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}

/*Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
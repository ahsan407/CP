#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= 65 && ch <= 122)
    {
        if (ch >= 65 && ch <= 90)
        {
            cout << "ALPHA" << endl
                 << "IS CAPITAL";
        }
        if (ch >= 97 && ch <= 122)
        {
            cout << "ALPHA" << endl
                 << "IS SMALL";
        }
    }

    if (ch >= 48 && ch <= 57)
    {
        cout << "IS DIGIT";
    }

    return 0;
}

/*Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:

Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
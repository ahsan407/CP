#include <iostream>
using namespace std;
int main()
{
    while (true)
    {
        int pas;
        cin >> pas;

        if (pas != 1999)
        {
            cout << "Wrong" << endl;
            continue;
        }

        cout << "Correct" << endl;
        break;
    }
    return 0;
}

/*Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

Note: The "Correct" password is the number 1999.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
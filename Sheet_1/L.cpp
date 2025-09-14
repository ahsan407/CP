#include <iostream>
#include <string>
using namespace std;

int main()
{
    string f1, l1;
    string f2, l2;

    cin >> f1 >> l1 >> f2 >> l2;

    if (l1 == l2)
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }
    return 0;
}

/*Given two person names. Each person has {"the first name" + "the second name"}. Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    while (num >= 10)
    {
        num /= 10;
    }
    if (num % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}

// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD"

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

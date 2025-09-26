#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Given a number N. Print a face down right angled triangle that has N rows.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
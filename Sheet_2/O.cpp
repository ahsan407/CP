#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Given a number N. Print a left angled triangle that has N rows.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
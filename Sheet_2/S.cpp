#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;

        int sum = 0;

        for (int i = min(x, y) + 1; i < max(x, y); i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
}

// Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
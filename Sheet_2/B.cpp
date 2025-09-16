#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << endl;
    }
    return 0;
}

// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
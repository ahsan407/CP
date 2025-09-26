#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long num;
        cin >> num;

        if (num == 0)
        {
            cout << 0;
        }

        while (num != 0)
        {
            cout << num % 10 << " ";
            num /= 10;
        }
        cout << endl;
    }

    return 0;
}

// Given a number N. Print the digits of that number from right to left separated by space.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
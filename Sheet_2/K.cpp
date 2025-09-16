#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

// Given a number N. Print all the divisors of N in ascending order.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    if ((n % m == 0) || (m % n == 0))
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
    return 0;
}

// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
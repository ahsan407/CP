#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
        return 0;

    long long a = 0, b = 1; // First two Fibonacci numbers

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

// Given a number N. Print first N numbers of the Fibonacci sequence.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
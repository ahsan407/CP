#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, result = 1;
    cin >> a >> b >> c >> d;

    result = (result * (a % 100)) % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;

    if (result < 10)
        cout << "0" << result << endl;
    else
        cout << result << endl;

    return 0;
}

// Given 4 numbers A, B, C and D. Print the last 2 digits from their Multiplication.

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
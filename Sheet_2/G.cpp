#include <iostream>
using namespace std;
long long fact(int num)
{
    long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        cout << fact(num) << endl;
    }
    return 0;
}

// Given a number N. Print the factorial of number N.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
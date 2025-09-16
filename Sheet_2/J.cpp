#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}

// Given a number . Print all prime numbers between 1 and N inclusive.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
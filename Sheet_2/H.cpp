#include <iostream>
#include <math.h>
using namespace std;
bool prime(int num)
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
    if (prime(num))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// Given a number X. Determine if the number is prime or not

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
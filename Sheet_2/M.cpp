#include <iostream>
using namespace std;
bool isLucky(int num)
{
    while (num != 0)
    {
        int d = num % 10;

        if (d != 4 && d != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main()
{
    long a, b;
    cin >> a >> b;

    bool flag = false;

    for (int i = a; i <= b; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << -1;
    }
    return 0;
}

/*Given two numbers A and B. Print all lucky numbers between A and B inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
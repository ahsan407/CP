#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        int m, n;
        cin >> m >> n;

        if (m <= 0 || n <= 0)
        {
            break;
        }

        int sum = 0;

        for (int j = min(m, n); j <= max(m, n); j++)
        {

            {
                sum += j;
                cout << j << " ";
            }
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}

/*Given multiple lines each line contains two numbers N and M. For each line print a single line contains:

The numbers between N and M inclusive separated by single space.
The message " sum =".
The summation of all numbers between N and M inclusive.

Note: The program should be TERMINATED as soon as any of these two numbers is less than or equal to zero and don't print any thing.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
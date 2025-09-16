#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    int max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > max)
        {
            max = num;
        }
    }
    cout << max;
    return 0;
}

// Given a number N, and N numbers, find maximum number in these N numbers.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

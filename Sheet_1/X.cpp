#include <iostream>
using namespace std;
int main()
{
    long long l1, l2, r1, r2, left, right;
    cin >> l1 >> r1 >> l2 >> r2;

    left = max(l1, l2);
    right = min(r1, r2);

    if (left > right)
        cout << -1 << endl;
    else
        cout << left << " " << right << endl;
    return 0;
}

/*Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input : Only one line contains two intervals [l1,r1], [l2,r2] where (1 ≤ l1 , l2 , r1 , r2 ≤ 10^9), ( l1 ≤ r1 , l2 ≤ r2).*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
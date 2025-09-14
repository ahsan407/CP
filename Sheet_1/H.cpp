#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float m, n;
    cin >> m >> n;
    cout << "floor " << m << " / " << n << " = " << floor(m / n) << endl;
    cout << "ceil " << m << " / " << n << " = " << ceil(m / n) << endl;
    cout << "round " << m << " / " << n << " = " << round(m / n) << endl;
    return 0;
}

// Given 2 numbers A and B . Print floor, ceil and round of A/B

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
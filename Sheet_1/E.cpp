#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double r, pi = 3.141592653;
    cin >> r;
    cout << fixed << setprecision(9) << pi * r * r;

    return 0;
}

/*Given a number R calculate the area of a circle using the following formula:

Area = π * R^2.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
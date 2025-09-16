#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= 12; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}

// Given a number N. Print the maltiplication table of the number from 1 to 12

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F
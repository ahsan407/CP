#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << hcf(num1, num2) << endl;
    return 0;
}

// Given two numbers A and B. Print the greatest common divisor between (A, B).

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

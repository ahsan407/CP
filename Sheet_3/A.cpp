#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << abs(sum) << endl;

    return 0;
}

// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
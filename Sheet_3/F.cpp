#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Given a number N and an array A of N numbers. Print the array in a reversed order.

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
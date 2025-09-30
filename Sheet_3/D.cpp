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
        if (arr[i] > 10)
        {
            continue;
        }
        cout << "A[" << i << "] = " << (arr[i]) << endl;
    }

    return 0;
}

// Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
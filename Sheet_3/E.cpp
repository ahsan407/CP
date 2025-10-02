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

    int minVal = arr[0];
    int pos = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            pos = i + 1;
        }
    }

    cout << minVal << " " << pos << endl;
    return 0;
}

// Given a number N and an array A of N numbers. Print the lowest number and its position.

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
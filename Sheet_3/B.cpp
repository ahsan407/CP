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

    int num, isFound = 0;
    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            isFound = 1;
            cout << i << endl;
            break;
        }
    }

    if (!isFound)
    {
        cout << "-1" << endl;
    }

    return 0;
}

// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
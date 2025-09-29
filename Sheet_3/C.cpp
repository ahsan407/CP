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
        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        cout << arr[i] << " ";
    }

        return 0;
}

/*Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
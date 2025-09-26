#include <iostream>
using namespace std;
int main()
{
    char s;
    int n;
    cin >> s >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        for (int j = 0; j < num; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}

/*Given 3 lines of input described as follow:

First line contains a symbol.
Second line contains a number N.
Third line contains N numbers.

For each number Xi in the N numbers print a new line that contains the symbol S repeated Xi time.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
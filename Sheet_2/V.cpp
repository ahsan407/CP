#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << num << " " << num + 1 << " " << num + 2 << " PUM" << endl;
        num += 4;
    }

    return 0;
}

/*Given a number N. Print N lines that describes PUM game. For more clarification see the examples.

Examples

Input:
7
Output:
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
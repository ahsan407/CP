#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        cin >> num;

        int count = 0;
        int res = 0;

        while (num != 0)
        {
            if (num % 2 == 1)
            {
                count += 1;
            }
            num /= 2;
        }
        for (int i = 0; i < count; i++)
        {
            res = res * 2 + 1;
        }
        cout << res << endl;
    }
    return 0;
}

/*Given a number N. Print the result of doing the following operation on N:

Convert N to its binary representation.
Count number of ones in the above binary representation.
Print the equivalent decimal number that its binary representation has only the number of ones that were counted above.
For example: (10)decimal = (1010)binary has 2 ones "11", after converting "11" to decimal number it will become 3.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
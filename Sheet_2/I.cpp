#include <iostream>
using namespace std;
long reverse(long num)
{
    long reverse = 0;
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int num;
    cin >> num;

    long rev = reverse(num);

    cout << rev << endl;

    if (rev == num)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

/*Given a number N. Print 2 lines that contain the following respectively:

Print N in a reversed order and not leading zeroes.
If N is a palindrome number print "YES" otherwise, print "NO.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
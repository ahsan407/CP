#include <iostream>
using namespace std;
int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int result = 0;
    for (int i = 1; i <= N; i++)
    {
        int s = digitSum(i);
        if (s >= A && s <= B)
        {
            result += i;
        }
    }

    cout << result << endl;
    return 0;
}

// Given three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

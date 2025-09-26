#include <iostream>
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;

    int count = 0;

    for (int X = 0; X <= K; X++)
    {
        for (int Y = 0; Y <= K; Y++)
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

// Given two numbers K and S. Determine how many different values of X,Y and Z such that (0≤X,Y,Z≤K) and X+Y+Z=S

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <iostream>
using namespace std;
int main()
{
    long int num;
    cin >> num;

    int year, rem, month, day;

    year = num / 365;
    rem = num % 365;
    month = rem / 30;
    day = rem % 30;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;

    return 0;
}

// Given a Number N corresponding to a person's age (in days).
//  Print his age in years, months and days, followed by its respective message "years", "months", "days".

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origem" << endl;
    }
    else if (x != 0 && y == 0)
    {

        cout << "Eixo X" << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4" << endl;
    }

    return 0;
}

/*Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
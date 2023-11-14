// ATM
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    double Y;
    cin >> X >> Y;
    if (X > Y)
    {
        cout << fixed << setprecision(2) << Y;
    }
    else
    {
        if (X % 5 == 0)
        {

            double rtn = Y - (X + 0.5);
            cout << fixed << setprecision(2) << rtn;
        }
        else
        {
            cout << fixed << setprecision(2) << Y;
        }
    }
}
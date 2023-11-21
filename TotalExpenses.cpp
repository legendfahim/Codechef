// Total Expenses
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, p;
        cin >> q >> p;
        float cost = q * p;
        if (q > 1000)
        {
            cout << fixed << setprecision(6) << cost - (cost * 0.1) << endl;
        }
        else
        {

            cout << fixed << setprecision(6) << cost << endl;
        }
    }
}

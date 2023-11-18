// Football Match
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string names[n], team2;
        int r1 = 0, r2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> names[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (names[0] == names[i])
            {
                r1++;
            }
            else
            {
                team2 = names[i];
                r2++;
            }
        }
        if (r1 > r2)
        {
            cout << names[0] << endl;
        }
        else if (r1 == r2)
        {
            cout << "Draw" << endl;
        }
        else
        {
            cout << team2 << endl;
        }
    }
}
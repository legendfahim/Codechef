// World Chess Championship
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // test case
    int t;
    cin >> t;
    while (t--)
    {
        // get input
        string s;
        int x, c = 0, n = 0;
        cin >> x >> s;
        // collect point
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'C')
            {
                c += 2;
            }
            else if (s[i] == 'N')
            {
                n += 2;
            }
            else
            {

                c += 1;
                n += 1;
            }
        }
        // compare point

        if (c > n)
        {
            cout << 60 * x << endl;
        }
        else if (c < n)
        {
            cout << 40 * x << endl;
        }
        else if (c == n)
        {
            cout << 55 * x << endl;
        }
    }
}
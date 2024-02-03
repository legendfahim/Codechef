// ATM Machine

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = "";
        while (n--)
        {
            int c;
            cin >> c;
            if (c <= k)
            {
                k -= c;
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
        cout << s << endl;
    }
}

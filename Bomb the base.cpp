// Bomb the base

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {

            int num;
            cin >> num;
            if (num < x)
            {
                ans = i;
            }
        }
        cout << ans << endl;
    }
}
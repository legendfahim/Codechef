// Slow Solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int t, n, s;
        cin >> t >> n >> s;
        int tc = min(t, s / n);

        if (tc + 1 <= t)
        {
            cout << n * n * (tc) + (s % n) * (s % n) << endl;
        }
        else
        {
            cout << n * n * (tc) << endl;
        }
    }
}
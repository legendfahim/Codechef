#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int total = k / x;
        if (total > n)
        {
            cout << n << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
}

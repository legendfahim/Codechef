// Chef and Pairing Slippers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, x;
        cin >> n >> l >> x;
        r = n - l;
        cout << min(l, r) * x << endl;
    }
}
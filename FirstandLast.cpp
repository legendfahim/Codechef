// First and Last
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const ll N = 1e5 + 5;

int main()
{
    FastIO;

    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        ll ar[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ans = max(ans, ar[i] + ar[(i % n) + 1]);
        }

        cout << ans << '\n';
    }
    return 0;
}

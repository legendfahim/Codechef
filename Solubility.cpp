
// Solubility
#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, a, b;
        cin >> x >> a >> b;
        cout << (a + (100 - x) * b) * 10 << endl;
    }

    return 0;
}
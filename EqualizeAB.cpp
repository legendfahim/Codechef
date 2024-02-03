// Equalize AB
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        cout << ((a - b) % (x * 2) ? "NO" : "YES") << endl;
    }
}

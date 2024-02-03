
// Problem
#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    // test case input
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        bool result = false;
        if ((n + m) % 2 == 0 && abs(n - m) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
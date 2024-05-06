#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int rem = n - a;
        if (a > rem)
        {
            cout << rem << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}

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
        if (x > (n - x))
        {
            cout << n - x << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}

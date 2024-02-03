// Decorating Christmas Tree
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (n > x)
        {
            cout << "NO" << endl;
        }
        else if ((x == n) && (y < (3 * n)))
        {
            cout << "NO" << endl;
        }

        else
        {
            int p = y / 3;
            int r = n - p;
            x -= p;
            if (x < 2 * r)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}

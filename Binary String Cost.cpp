// Binary String Cost

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
        int zero = 0;
        int one = 0;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (zero > 0 && one > 0)
        {
            if (x > y)
            {
                cout << y << endl;
            }
            else
            {
                cout << x << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

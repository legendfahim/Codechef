// Chef Diet
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n, k;
        cin >> n >> k;

        long a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int store = 0;
        int day = -1;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] + store < k)
            {
                day = i + 1;
                break;
            }
            else
            {
                store = (store + a[i]) - k;
            }
        }

        if (day == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << day << endl;
        }
    }

    return 0;
}

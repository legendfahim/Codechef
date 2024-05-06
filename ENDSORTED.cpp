#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one, last;
        for (int i = 1; i <= n; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                one = i;
            }
            else if (c == n)
            {
                last = i;
            }
        }
        if (one < last)
        {
            cout << (one - 1) + (last-n) << endl;
        }
        else
        {
            cout << (one - 1) + (n - last - 1) << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long max = 0;
        while (n--)
        {
            int c;
            cin >> c;
            if ((abs(c - m)) >= (abs(c - 1)))
            {
                max += abs(c - m);
            }
            else
            {
                max += abs(c - 1);
            }
        }
        cout << max << endl;
    }
}

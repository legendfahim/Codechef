// Red Light, Green Light

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, k = 0;
        cin >> n >> h;
        while (n--)
        {
            int c;
            cin >> c;
            if (c > h)
            {
                k++;
            }
        }
        cout << k << endl;
    }
}
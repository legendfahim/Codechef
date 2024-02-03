// Counting Problem

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
        int odd = 0;
        while (n--)
        {
            int c;
            cin >> c;
            if (c % 2 != 0)
            {
                odd++;
            }
        }

        if (odd == 0)
        {
            cout << "NO" << endl;
        }
        else
        {

            if (odd % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
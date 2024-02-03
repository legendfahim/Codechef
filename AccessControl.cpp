// Access Control

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
        string s;
        cin >> s;
        int rem = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (rem == 0)
                {
                    flag = false;
                    break;
                }
                rem--;
            }
            else
            {
                rem = x;
            }
        }
        if (flag)
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

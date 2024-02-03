// Judged
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                count++;
            }
        }

        if (count >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

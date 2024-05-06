#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = -1;
        for (int i = 0; i < 3; i++)
        {
            int c;
            cin >> c;
            if (c >= x)
            {
                x = c;
            }
        }
        cout << x << endl;
        ;
    }
}

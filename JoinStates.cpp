// Join States
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
        int count = 0;
        int state = 0;
        while (n--)
        {
            int i;

            cin >> i;
            if (i >= m)
            {
                state++;
                count = 0;
            }
            else
            {
                count += i;
                if (count >= m)
                {
                    state++;
                    count = 0;
                }
            }
        }
        cout << state << endl;
    }
}
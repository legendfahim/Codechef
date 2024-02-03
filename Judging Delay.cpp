// Judging Delay

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
        int count = 0;
        while (n--)
        {
            int s, j;
            cin >> s >> j;
            if (abs(s - j) > 5)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
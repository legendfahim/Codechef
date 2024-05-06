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
        int count = 0;
        while (n--)
        {
            int c;
            cin >> c;
            ;
            if (c >= x)
            {
                count++;
            }
        }

        cout << count << endl;
    }
}

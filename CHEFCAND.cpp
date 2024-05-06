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
        if (n <= x)
        {
            cout << 0 << endl;
        }
        else
        {
            int need = n - x;
            if (need % 4 == 0)
            {
                cout << need / 4 << endl;
            }
            else
            {
                cout << (need / 4) + 1 << endl;
            }
        }
    }
}

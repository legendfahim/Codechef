// I Can Use Both Hands!

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, m, result = 0;
        cin >> l >> r >> m;
        if (m % l == 0)
        {
            result += m / l;
        }
        else
        {
            result += (m / l) + 1;
        }
        result += m / r;
        cout << result << endl;
    }
}
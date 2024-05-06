#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int cal = z - (y / x);
        cout << ((cal < 0) ? 0 : cal) << endl;
    }
}

// Three Friends

#include <bits/stdc++.h>
using namespace std;
int maxNum(int x, int y, int z)
{
    return max(max(x, y), z);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) == 2 * maxNum(x, y, z))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
// Two Ranges

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        set<int> range;
        for (int i = a; i <= b; i++)
        {
            range.insert(i);
        }
        for (int j = c; j <= d; j++)
        {
            range.insert(j);
        }
        cout << range.size() << endl;
    }
}

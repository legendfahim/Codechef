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
        map<int, int> groups;
        while (n--)
        {
            int c;
            cin >> c;
            groups[c]++;
        }
        bool flag = true;
        for (auto &it : groups)
        {
            if (it.first != it.second)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

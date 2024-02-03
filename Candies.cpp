// Candies

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> count;
        int n;
        cin >> n;
        n *= 2;
        bool flag = true;
        while (n--)
        {
            int c;
            cin >> c;
            count[c]++;
            if (count[c] > 2)
            {
                flag = false;
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
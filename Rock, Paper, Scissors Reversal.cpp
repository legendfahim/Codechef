#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        multiset<char> data;
        int n;
        cin >> n;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == 'R')
            {
                data.insert('P');
            }
            else if (c == 'P')
            {
                data.insert('S');
            }
            else if (c == 'S')
            {
                data.insert('R');
            }
        }
        for (auto it = data.begin(); it != data.end(); it++)

        {
            cout << *it;
        }
        cout << endl;
    }
}
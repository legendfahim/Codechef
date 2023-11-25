// Chef Judges a Competition
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
        vector<int> alice;
        vector<int> bob;
        int a = 0, b = 0;
        // for alice
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            alice.push_back(c);
        }
        sort(alice.begin(), alice.end());

        // for bob
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            bob.push_back(c);
        }
        sort(bob.begin(), bob.end());
        for (int i = 0; i < alice.size() - 1; i++)
        {
            a += alice[i];
        }
        for (int i = 0; i < bob.size() - 1; i++)
        {
            b += bob[i];
        }
        if (a < b)
        {
            cout << "Alice" << endl;
        }
        else if (a > b)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }

    return 0;
}

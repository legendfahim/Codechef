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
        string s = "";
        while (n--)
        {
            char c;
            cin >> c;
            if (c == 'A')
            {
                s += 'T';
            }
            else if (c == 'T')
            {
                s += 'A';
            }
            else if (c == 'C')
            {
                s += 'G';
            }
            else
            {
                s += 'C';
            }
        }

        cout << s << endl;
    }
}


// Malvika is peculiar about color of balloons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (char c : s)
        {
            if (c == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        cout << min(a, b) << endl;
    }
}

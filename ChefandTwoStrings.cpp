// Chef and Two Strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        int mini = 0, maxi = 0;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '?' || s2[i] == '?')
            {
                maxi++;
            }
            else
            {
                if (s1[i] != s2[i])
                {
                    mini++;
                    maxi++;
                }
            }
        }
        cout << mini << " " << maxi << endl;
    }
}
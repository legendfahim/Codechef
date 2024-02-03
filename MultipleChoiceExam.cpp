
// Multiple Choice Exam

#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        long long int count = 0;
        for (long long int i = 0; i < n; i)
        {
            if (s2[i] != 'N')
            {
                if (s1[i] == s2[i])
                {
                    count++;
                    i++;
                }
                else
                {
                    i += 2;
                }
            }
            else
            {
                i++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
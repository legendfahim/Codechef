// Easy Pronunciation

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
        int consonant = 0;
        bool result = false;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                consonant = 0;
            }
            else
            {
                consonant++;
            }

            if (consonant >= 4)
            {
                result = true;
            }
        }
        // print result
        if (result)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

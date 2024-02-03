// Hattrick
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int count = 0;
        bool result = false;
        for (int i = 0; i < 6; i++)
        {
            cin >> c;
            if (c == 'W')
            {
                count++;
            }
            else
            {
                count = 0;
            }
            if (count == 3)
            {
                result = true;
            }
        }
        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

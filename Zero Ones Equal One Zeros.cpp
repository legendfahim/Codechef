// Zero Ones Equal One Zeros

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
        string s = "1";

        for (int i = 0; i < n - 2; i++)
        {
            s += '0';
        }
        s += '1';
        cout << s << endl;
    }
}
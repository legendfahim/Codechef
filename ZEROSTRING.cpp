// ZEROSTRING
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
        int zero = 0, one = 0;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        if (zero > one)
        {
            cout << one << endl;
        }
        else if (one > zero)
        {
            cout << zero + 1 << endl;
        }
        else
        {
            cout << zero << endl;
        }
    }
}
// Adjacent Sum Parity

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
        int brr[n], arr[n];
        arr[1] = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> brr[i];
            if (i < n)
            {
                if (brr[i] % 2 != 0)
                {
                    if (arr[i] % 2 != 0)
                    {
                        arr[i + 1] = 2;
                    }
                    else
                    {
                        arr[i + 1] = 1;
                    }
                }
                else
                {
                    if (arr[i] % 2 != 0)
                    {
                        arr[i + 1] = 1;
                    }
                    else
                    {
                        arr[i + 1] = 2;
                    }
                }
            }
        }
        if (((arr[n] + arr[1]) % 2) == brr[n])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
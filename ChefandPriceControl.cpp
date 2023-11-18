// Chef and Price Control

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, arr, invest = 0, price = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr;
            invest += arr;
            if (arr > k)
            {
                price += k;
            }
            else
            {
                price += arr;
            }
        }

        cout << invest - price << endl;
    }
}

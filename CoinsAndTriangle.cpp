// Coins And Triangle

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
        int count = 0;
        long long sum = 0;
        for (int i = 1; i > 0; i++)
        {
            sum += i;
            if (sum <= n)
            {
                count++;
            }
            else
            {
                cout << count << endl;
                break;
            }
        }
    }
}
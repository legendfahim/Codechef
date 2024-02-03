// Candy Love

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
        long sum = 0;
        while (n--)
        {
            int c;
            cin >> c;
            sum += c;
        }
        int a = sum / 2;
        int b = sum - a;
        if (abs(a - b) < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
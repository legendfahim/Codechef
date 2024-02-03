// Puppy and Sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> d >> n;
        int sum = 0;
        while (d--)
        {
            for (int i = 1; i <= n; i++)
            {
                sum += i;
            }
            n = sum;
            sum = 0;
        }
        cout << n << endl;
    }
}

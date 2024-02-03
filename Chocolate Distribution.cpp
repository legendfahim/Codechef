// Chocolate Distribution
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
        int a = n / 2;
        if (n % 2 != 0)
        {
            a++;
        }
        cout << a << " " << n << endl;
    }
}

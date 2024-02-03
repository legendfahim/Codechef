
// Peaceful Party

#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        if (b >= (a + c))
        {
            cout << b << endl;
        }
        else
        {
            cout << a + c << endl;
        }
    }

    return 0;
}
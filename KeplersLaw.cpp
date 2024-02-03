
// Keplers Law

#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        if ((pow(t1, 2) / pow(r1, 3)) == (pow(t2, 2) / pow(r2, 3)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
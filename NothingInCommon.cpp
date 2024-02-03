
// Nothing in Common

#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;

        set<long long int> aliceNumbers;
        set<long long int> commonNumbers;

        for (long long int i = 0; i < n; i++)
        {
            long long int c;
            cin >> c;
            aliceNumbers.insert(c);
        }

        for (long long int i = 0; i < m; i++)
        {
            long long int c;
            cin >> c;

            if (aliceNumbers.count(c) > 0)
            {
                commonNumbers.insert(c);
            }
        }

        cout << commonNumbers.size() << endl;
    }

    return 0;
}
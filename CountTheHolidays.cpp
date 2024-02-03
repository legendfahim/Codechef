
// Count the Holidays

#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {

        set<long long int> days = {6, 13, 20, 27, 7, 14, 21, 28};
        long long int n;
        cin >> n;
        while (n--)
        {
            long long int c;
            cin >> c;
            days.insert(c);
        }

        cout << days.size() << endl;
    }

    return 0;
}
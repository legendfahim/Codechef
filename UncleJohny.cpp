
// Uncle Johny
#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> playlist;
        while (n--)
        {
            long long int c;
            cin >> c;
            playlist.push_back(c);
        }
        long long int k;
        cin >> k;
        k = playlist[k - 1];
        sort(playlist.begin(), playlist.end());
        auto it = find(playlist.begin(), playlist.end(), k);
        cout << distance(playlist.begin(), it) + 1 << endl;
    }

    return 0;
}
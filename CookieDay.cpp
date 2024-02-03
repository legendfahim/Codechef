// Cookie Day
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        set<int> mini;
        while (n--)
        {
            int c;
            cin >> c;
            if (c >= k)
            {
                arr.push_back(c);
            }
        }
        if (arr.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int j = 0; j < arr.size(); j++)
            {
                mini.insert(arr[j] % k);
            }
            cout << *mini.begin() << endl;
        }
    }
}

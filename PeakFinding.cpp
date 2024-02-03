// Peak Finding
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
        set<int> data;
        while (n--)
        {
            int c;
            cin >> c;
            data.insert(c);
        }
        auto it = data.rbegin();
        cout << *it << endl;
    }
}

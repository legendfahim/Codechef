// Buying New Tablet
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        bool result = true;
        map<int, int> data;

        while (n--)
        {
            int w, h, p;
            cin >> w >> h >> p;
            data[w * h] = p;
        }
        for (int i = data.size() - 1; i >= 0; i--)
        {
            auto it = data.rbegin();
            if (it->second > b)
            {
                data.erase(it->first);
            }
            else
            {
                cout << it->first << endl;
                result = false;
                break;
            }
        }
        if (result)
        {
            cout << "no tablet" << endl;
        }
    }

    return 0;
}
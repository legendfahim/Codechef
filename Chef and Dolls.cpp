// Chef and Dolls

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

        unordered_map<int, int> countMap;

        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            countMap[c]++;
        }

        int result = -1;
        for (auto it = countMap.begin(); it != countMap.end(); ++it)
        {
            if (it->second % 2 == 1)
            {
                result = it->first;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}

// Card Removal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[11] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            arr[c]++;
        }
        set<int> s;
        for (int i = 1; i <= 10; i++)
        {
            if (arr[i] != 0)
            {
                s.insert(arr[i]);
            }
        }

        cout << n - *(--s.end()) << endl;
    }
}
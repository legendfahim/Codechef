// A PLUS B Remastered
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
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int A;
            cin >> A;
            a.push_back(A);
        }
        for (int i = 0; i < n; i++)
        {
            int B;
            cin >> B;
            b.push_back(B);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int count = a[0] + b[0];
        bool flag = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] + b[i] != count)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            for (int num : a)
            {
                cout << num << " ";
            }
            cout << endl;
            for (int num : b)
            {
                cout << num << " ";
            }
        }
        else
        {
            cout << -1 << endl;
        }
        cout << endl;
    }

    return 0;
}
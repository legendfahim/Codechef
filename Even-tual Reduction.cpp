// Even-tual Reduction
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
        int arr[256] = {0};
        while (n--)
        {
            char c;
            cin >> c;
            arr[(int)c]++;
        }
        bool flag = true;
        for (int i = 97; i < 123; i++)
        {
            if (arr[i] % 2 != 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
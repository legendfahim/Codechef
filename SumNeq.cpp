
// Sum Neq
#include <bits/stdc++.h>

using namespace std;

long long int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        set<long long int> a;

        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            a.insert(arr[i]);
        }
        if (n == 4)
        {

            if ((arr[0] + arr[1]) != (arr[2] + arr[3]))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            if (a.size() == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}

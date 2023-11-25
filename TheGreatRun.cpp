// The Great Run
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
        int nums[n];
        int maxNum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        for (int i = 0; i <= n - k; i++)
        {
            int sum = 0;
            for (int j = i; j < i + k; j++)
            {
                sum += nums[j];
            }

            maxNum = max(maxNum, sum);
        }
        cout << maxNum << endl;
    }
    return 0;
}
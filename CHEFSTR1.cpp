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
        vector<int> arr;
        long long sum = 0;
        while (n--)
        {
            int c;
            cin >> c;
            arr.push_back(c);
        }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            sum += abs(arr[i] - arr[i + 1])-1;
            // cout<<sum<<endl;
        }
        cout << sum << endl;
    }
}

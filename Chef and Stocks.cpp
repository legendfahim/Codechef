// Chef and Stocks
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
        multiset<int> nums;
        while (n--)
        {
            int c;
            cin >> c;
            nums.insert(c);
        }
        int sum = 0;
        auto it = nums.begin();
        ++it;

        for (; it != nums.end(); ++it)
        {
            sum += *it;
        }
        cout << sum << endl;
    }
}

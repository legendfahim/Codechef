
// Vishesh and his Popcorn Combo
#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);        \
    cout.tie(nullptr);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        set<int> nums;
        nums.insert(a1 + a2);
        nums.insert(b1 + b2);
        nums.insert(c1 + c2);
        auto it = nums.end();
        it--;
        cout << *it << endl;
    }
}

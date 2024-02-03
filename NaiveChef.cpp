
// Naive Chef

#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);        \
    cout.tie(nullptr);

// Main Logic(countA / n) * (countB / n)

int main()
{
    FastIO int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        double first = 0, second = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == a)
            {
                first++;
            }
            if (c == b)
            {
                second++;
            }
        }
        double cal = (first / n) * (second / n);
        cout << fixed << setprecision(10) << cal << endl;
    }
}
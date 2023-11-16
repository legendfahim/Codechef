// FLOW0017
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, secondMax;
        cin >> a >> b >> c;

        secondMax = min(max(a, b), min(max(b, c), max(a, c)));
        cout << secondMax << endl;
    }
}
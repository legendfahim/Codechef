#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        cout << ((l > n) ? n : (n + (n - l))) << endl;
    }
}

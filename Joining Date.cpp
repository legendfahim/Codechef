// Joining Date
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
        int lot = (n % 5 == 0) ? (n / 5) : (n / 5 + 1);
        int pos = (k % 5 == 0) ? (k / 5) : (k / 5 + 1);
        cout << lot - pos << endl;
    }
}
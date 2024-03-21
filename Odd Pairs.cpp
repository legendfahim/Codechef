// Odd Pairs
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long even = n / 2;
        long odd = n - even;

        cout << even * 2 * odd << endl;
    }
}
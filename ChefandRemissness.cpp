// Chef and Remissness
#include <bits/stdc++.h>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        cout << max(a, b) << " " << a + b << endl;
    }

    return 0;
}
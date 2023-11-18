// Back to Campus
#include <iostream>
using namespace std;

int main()
{
    // input test case
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n / k;
        if (n % k != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
}


// Airlines
#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, n;
        cin >> x >> n;
        long long int cal = x * 100;
        if (cal < n)
        {
            cout << (n - cal + 99) / 100 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

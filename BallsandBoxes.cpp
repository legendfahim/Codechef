// Balls and Boxes

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        if (2 * n >= k * (k + 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
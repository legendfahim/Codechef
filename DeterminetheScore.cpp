
// Determine the Score

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
        cout << (x / 10) * n << endl;
    }

    return 0;
}

// Minimum Cars required

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << n / 4 << endl;
        }
        else
        {
            cout << (n / 4) + 1 << endl;
        }
    }
}

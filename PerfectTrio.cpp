
// Perfect Trio
#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {

        long long int a, b, c;
        cin >> a >> b >> c;
        if ((a + b == c) || (b + c == a) || (a + c == b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
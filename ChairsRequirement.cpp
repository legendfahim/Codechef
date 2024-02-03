
// Chairs Requirement

#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x <= y)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x - y << endl;
        }
    }
}
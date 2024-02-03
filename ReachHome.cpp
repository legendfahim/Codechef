
// Reach Home
#include <iostream>
using namespace std;

long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {

        long long int a, b;
        cin >> a >> b;
        if (a * 5 >= b)
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
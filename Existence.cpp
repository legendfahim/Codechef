// Existence
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        unsigned long long X, Y;
        cin >> X >> Y;

        // Check if the equation is satisfied
        if (((X * X * X * X) + (4 * Y * Y)) == 4 * X * X * Y)
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
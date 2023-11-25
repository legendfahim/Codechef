// Fit Squares in Triangle

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b;
        cin >> b;
        if (b == 1 || b == 2 || b == 3)
        {
            cout << 0 << endl;
            continue;
        }
        if (b % 2 != 0)
        {

            b -= 1;
        }

        int result = ((0.5 * b * b) - b) / 4;

        cout << result << endl;
    }

    return 0;
}
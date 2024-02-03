// Bear and Candies 123
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b;
        cin >> l >> b;
        long int limak = 0, bob = 0;
        for (int i = 1; i > 0; i++)
        {
            if (i % 2 == 0)
            {
                bob += i;
            }
            else
            {
                limak += i;
            }

            if (limak > l)
            {
                cout << "Bob" << endl;
                break;
            }
            else if (bob > b)
            {
                cout << "Limak" << endl;
                break;
            }
            // cout << limak << endl
            //      << bob << endl;
        }
    }
}
// Burgers
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
        long long int count = 0;
        while (1)
        {
            if (a >= 1 && b >= 1)
            {
                count++;
                a--;
                b--;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}

// Maximum Score

#include <iostream>

using namespace std;

long long int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {
        long long int l;
        cin >> l;
        long long int one = 0;
        long long int zero = 0;
        long long int oportunity = l / 2;
        long long int score = 0;
        for (long long int i = 0; i < l; i++)
        {
            long long int n;
            cin >> n;
            if (n == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        cout << min(oportunity, min(one, zero)) << endl;
    }
}
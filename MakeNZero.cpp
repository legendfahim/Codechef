
// Make N Zero

#include <iostream>

using namespace std;

long long int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {
        long long int N;
        cin >> N;

        if (N % 3 == 0 || N % 4 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool possible = false;
            for (long long int i = 0; i <= N / 3; ++i)
            {
                if ((N - i * 3) % 4 == 0)
                {
                    possible = true;
                    break;
                }
            }

            if (possible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
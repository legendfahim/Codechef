// Hidden Numbers
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        // Find two factors A and B of N
        int A = 1, B = N;

        for (int i = 2; i <= sqrt(N); ++i)
        {
            if (N % i == 0)
            {
                A = i;
                B = N / i;
                break;
            }
        }

        // Output the result
        cout << A << " " << B << endl;
    }

    return 0;
}
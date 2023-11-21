// Ciel and Receipt
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, result = 0;
        cin >> n;
        bool checkPoint = false;
        while (n != 0)
        {

            for (int i = 1; i < 13; i++)
            {
                int check = pow(2, (i - 1));

                if (check > n)
                {
                    checkPoint = false;
                    result++;
                    n -= pow(2, (i - 2));
                    break;
                }
                else if (check == n)
                {
                    checkPoint = false;
                    result++;
                    n -= pow(2, i - 1);
                    break;
                }
                else
                {
                    checkPoint = true;
                }
            }
            if (checkPoint)
            {
                result++;
                n -= pow(2, 11);
            }
        }
        cout << result << endl;
    }
}
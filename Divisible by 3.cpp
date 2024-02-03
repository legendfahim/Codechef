// Divisible by 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, count = 0;
        cin >> A >> B;
        if (A % 3 == 0 || B % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (1)
            {
                if (A > B)
                {

                    A = abs(A - B);
                    count++;
                    if (A % 3 == 0)
                    {
                        cout << count << endl;
                        break;
                    }
                }
                else
                {

                    B = abs(A - B);
                    count++;
                    if (B % 3 == 0)
                    {
                        cout << count << endl;
                        break;
                    }
                }
            }
        }
    }
}

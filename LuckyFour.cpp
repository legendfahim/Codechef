// Lucky Four

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = 0;
        while (n != 0)
        {
            if (n % 10 == 4)
            {

                result++;
            }
            n /= 10;
        }
        cout << result << endl;
    }
}

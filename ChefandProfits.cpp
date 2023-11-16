// Chef and Profits
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int buy = x * y;
        int sell = x * z;
        int profit = sell - buy;
        cout << profit << endl;
    }
}
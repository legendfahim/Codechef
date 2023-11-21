// Work Smarter, Not Harder

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float l, v1, v2, h1, r1;
        int r, t1, h, t2;
        cin >> l >> v1 >> v2;
        // for tortoise
        r = l / v1;
        r1 = l / v1;
        t1 = r;
        if (r1 - r > 0)
        {
            t1++;
        }
        // for hare

        h = l / v2;
        h1 = l / v2;
        t2 = h;
        if (h1 - h > 0)
        {
            t2++;
        }
        // print result
        if (t1 > t2)
        {

            cout << (t1 - t2) - 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
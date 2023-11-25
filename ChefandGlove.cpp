// Chef and Glove
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
        int hand[n];
        int grove[n];
        for (int i = 0; i < n; i++)
        {

            cin >> hand[i];
        }
        for (int i = 0; i < n; i++)
        {

            cin >> grove[i];
        }
        int front = 0;
        for (int i = 0; i < n; i++)
        {
            if (hand[i] <= grove[i])
            {
                front++;
            }
        }
        int back = 0;
        for (int i = 0; i < n; i++)
        {
            if (hand[i] <= grove[n - 1 - i])
            {
                back++;
            }
        }
        if (front == n && back == n)
        {
            cout << "both" << endl;
        }
        else if (front == n && back != n)
        {
            cout << "front" << endl;
        }
        else if (front != n && back != n)
        {
            cout << "none" << endl;
        }
        else
        {
            cout << "back" << endl;
        }
    }

    return 0;
}

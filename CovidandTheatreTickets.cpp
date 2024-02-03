// Covid and Theatre Tickets

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, seat;
        cin >> row >> seat;
        if (row % 2 == 0)
        {
            row /= 2;
        }
        else
        {
            row = (row / 2) + 1;
        }
        if (seat % 2 == 0)
        {
            seat /= 2;
        }
        else
        {
            seat = (seat / 2) + 1;
        }
        cout << seat * row << endl;
    }
}
// The Block Game

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string check = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            check += s[i];
        }
        if (s == check)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
}

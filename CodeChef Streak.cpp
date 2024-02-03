// CodeChef Streak

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
        int omOld = 0, omNew = 0;
        // input for Om

        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c != 0)
            {
                omNew++;
            }
            else
            {
                omOld = max(omOld, omNew);
                omNew = 0;
            }
        }
        omOld = max(omOld, omNew);
        int addyOld = 0, addyNew = 0;
        // input for Addy
        for (int i = 0; i < n; i++)
        {

            int c;
            cin >> c;
            if (c != 0)
            {
                addyNew++;
            }
            else
            {
                addyOld = max(addyOld, addyNew);
                addyNew = 0;
            }
        }
        addyOld = max(addyOld, addyNew);
        // print section
        if (addyOld > omOld)
        {
            cout << "Addy" << endl;
        }
        else if (addyOld < omOld)
        {
            cout << "Om" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}

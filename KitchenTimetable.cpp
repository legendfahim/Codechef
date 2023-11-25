// Kitchen Timetable
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
        int recent = 0;
        int student = 0;
        int have[n];
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            have[i] = num;
            have[i] -= recent;
            recent = num;
        }
        int use[n];
        for (int i = 0; i < n; i++)
        {
            cin >> use[i];
            if (use[i] <= have[i])
            {
                student++;
            }
        }

        cout << student << endl;
    }
}
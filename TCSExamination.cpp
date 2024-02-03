// TCS Examination
#include <bits/stdc++.h>
using namespace std;
#define dd cout << "DRAGON" << endl;
#define ss cout << "SLOTH" << endl;
#define tt cout << "TIE" << endl;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsaD, tocD, dmD, dsaS, tocS, dmS, D, S;
        cin >> dsaD >> tocD >> dmD >> dsaS >> tocS >> dmS;
        D = dsaD + tocD + dmD;
        S = dsaS + tocS + dmS;
        if (dsaD == dsaS && tocD == tocS && dmD == dmS)
        {
            tt;
        }
        else
        {

            if (D > S)
            {
                dd;
            }
            else if (D == S)
            {
                if (dsaD > dsaS)
                {
                    dd;
                }
                else if (dsaD == dsaS)
                {
                    if (tocD > tocS)
                    {
                        dd;
                    }
                    else if (tocD < tocS)
                    {
                        ss;
                    }
                }
                else
                {
                    ss;
                }
            }

            else
            {
                ss;
            }
        }
    }
}
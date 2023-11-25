// Tanu and Head-bob
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int Y = 0, N = 0, I = 0;
        while (n--)
        {
            char c;
            cin >> c;

            if (c == 'Y')
            {
                Y++;
            }
            else if (c == 'N')
            {
                N++;
            }
            else if (c == 'I')
            {
                I++;
            }
        }
        if (I > 0 && Y == 0)
        {
            cout << "INDIAN" << endl;
        }
        else if (Y > 0 && I == 0)
        {
            cout << "NOT INDIAN" << endl;
        }
        else
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}
